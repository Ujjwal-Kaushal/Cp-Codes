#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#include <cctype>       // For isspace
#include <functional>   // For ptr_fun, not1 (as seen in screenshots)
#include <fstream>      // For fstream in main

using namespace std;

// --- Trimming Helper Functions (from screenshots) ---

// Trims leading whitespace
string ltrim(const string &str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

// Trims trailing whitespace
string rtrim(const string &str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
    return s;
}

// --- Fraud Detection Logic ---

// Struct to hold the dynamic state of a merchant account (MS)
struct MS {
    double t;                      // threshold (th)
    int tT = 0;                    // total_txn (total transactions)
    int fT = 0;                    // fraud_txn (fraudulent transactions count)
    bool f = false;                // is_fraudulent (fraud status)
    unordered_map<string, bool> cS; // charge_id -> initial fraud status (for disputes)
};

// Helper function to split strings by a delimiter
vector<string> split(const string& s, char d) {
    vector<string> v;
    stringstream ss(s);
    string i;
    while (getline(ss, i, d)) {
        v.push_back(i);
    }
    return v;
}

// Function to re-evaluate the merchant's fraud status
void eval(MS& ms, int mTx) {
    if (ms.tT < mTx) {
        ms.f = false;
        return;
    }

    // Calculate fraud ratio
    double r = (double)ms.fT / ms.tT;

    // Set fraud status (Part 2/3: ratio must be >= threshold)
    ms.f = (r >= ms.t);
}

// Complete the 'find_fraudulent_merchants' function below.
// The function is expected to return a STRING.
// The function accepts following parameters:
// 1. STRING non_fraud_codes
// 2. STRING fraud_codes
// 3. STRING ARRAY mcc_thresholds
// 4. STRING ARRAY merchant_mcc_map
// 5. STRING min_charges
// 6. STRING ARRAY charges
string find_fraudulent_merchants(string nfc, string fc, vector<string> cT, 
                                 vector<string> cM, string mC, vector<string> cL) {
    
    // --- 1. Parse Input Data Structures ---
    
    // Non-Fraud/Fraud Codes
    unordered_set<string> nFC(split(nfc, ',').begin(), split(nfc, ',').end());
    unordered_set<string> fC(split(fc, ',').begin(), split(fc, ',').end());

    // MCC Thresholds
    unordered_map<string, double> mTh; // mcc -> threshold
    for (const string& row : cT) {
        vector<string> p = split(row, ',');
        if (p.size() == 2) {
            mTh[p[0]] = stod(p[1]);
        }
    }

    // Account to MCC Map
    unordered_map<string, string> aM; // acc -> mcc
    for (const string& row : cM) {
        vector<string> p = split(row, ',');
        if (p.size() == 2) {
            aM[p[0]] = p[1];
        }
    }

    // Minimum Transactions
    int mTx = stoi(mC);
    
    // Merchant States and Charge ID to Account ID Map
    unordered_map<string, MS> mS; // acc -> MerchantState
    unordered_map<string, string> cA; // charge_id -> acc_id (for disputes)
    
    // --- 2. Initialize Merchant States ---
    for (const auto& pair : aM) {
        const string& acc = pair.first;
        const string& mcc = pair.second;
        
        MS state;
        // Default to 0.0 if MCC not found
        state.t = mTh.count(mcc) ? mTh.at(mcc) : 0.0; 
        mS[acc] = state;
    }

    // --- 3. Process Charges and Disputes Sequentially ---
    for (const string& l : cL) {
        vector<string> p = split(l, ',');
        
        const string& t = p[0]; // type (CHARGE or DISPUTE)

        if (t == "CHARGE" && p.size() >= 5) {
            // CHARGE, ch_id, acc, amount, code
            const string& cID = p[1];
            const string& aID = p[2];
            const string& c = p[4]; // code

            // 1. Update global charge map
            cA[cID] = aID;

            // 2. Update merchant state
            if (mS.count(aID)) {
                MS& ms = mS.at(aID);
                ms.tT++;
                
                bool isF = fC.count(c);
                
                // 3. Record initial charge status
                ms.cS[cID] = isF;
                
                // 4. Update fraud count
                if (isF) {
                    ms.fT++;
                }

                // 5. Re-evaluate fraud status
                eval(ms, mTx);
            }

        } else if (t == "DISPUTE" && p.size() >= 2) {
            // DISPUTE, ch_id
            const string& cID = p[1];

            // 1. Find the account ID for the disputed charge
            if (cA.count(cID)) {
                const string& aID = cA.at(cID);
                
                // 2. Update merchant state
                if (mS.count(aID)) {
                    MS& ms = mS.at(aID);
                    
                    // 3. Check if the disputed charge was initially marked fraudulent
                    // The dispute only changes the fraud count if it was marked fraudulent previously
                    if (ms.cS.count(cID) && ms.cS.at(cID) == true) {
                        // Retroactively change transaction status from fraud to non-fraud
                        ms.fT--;
                        ms.cS[cID] = false; // Update the record
                        
                        // 4. Re-evaluate fraud status (status might be restored to non-fraudulent)
                        eval(ms, mTx);
                    }
                }
            }
        }
    }

    // --- 4. Final Output Generation ---
    vector<string> res;
    for (const auto& pair : mS) {
        if (pair.second.f) {
            res.push_back(pair.first);
        }
    }

    // Sort the results lexicographically
    sort(res.begin(), res.end());

    // Join the results into a comma-separated string
    string out = "";
    for (size_t i = 0; i < res.size(); ++i) {
        out += res[i];
        if (i < res.size() - 1) {
            out += ",";
        }
    }

    return out;
}

int main() {
    // Note: The use of fstream and environment variables is for the target platform.
    // For local testing, you might need to adjust the fstream/getenv part or comment it out.
    // ofstream fout(getenv("OUTPUT_PATH"));
    
    // 1. Read non_fraud_codes
    string non_fraud_codes;
    getline(cin, non_fraud_codes);
    
    // 2. Read fraud_codes
    string fraud_codes;
    getline(cin, fraud_codes);
    
    // 3. Read mcc_thresholds
    string mcc_thresholds_count_temp;
    getline(cin, mcc_thresholds_count_temp);
    
    int mcc_thresholds_count = stoi(ltrim(rtrim(mcc_thresholds_count_temp)));
    vector<string> mcc_thresholds(mcc_thresholds_count);
    
    for (int i = 0; i < mcc_thresholds_count; i++) {
        string mcc_thresholds_item;
        getline(cin, mcc_thresholds_item);
        mcc_thresholds[i] = mcc_thresholds_item;
    }
    
    // 4. Read merchant_mcc_map
    string merchant_mcc_map_count_temp;
    getline(cin, merchant_mcc_map_count_temp);
    
    int merchant_mcc_map_count = stoi(ltrim(rtrim(merchant_mcc_map_count_temp)));
    vector<string> merchant_mcc_map(merchant_mcc_map_count);
    
    for (int i = 0; i < merchant_mcc_map_count; i++) {
        string merchant_mcc_map_item;
        getline(cin, merchant_mcc_map_item);
        merchant_mcc_map[i] = merchant_mcc_map_item;
    }
    
    // 5. Read min_charges
    string min_charges;
    getline(cin, min_charges);
    
    // 6. Read charges
    string charges_count_temp;
    getline(cin, charges_count_temp);
    
    int charges_count = stoi(ltrim(rtrim(charges_count_temp)));
    vector<string> charges(charges_count);
    
    for (int i = 0; i < charges_count; i++) {
        string charges_item;
        getline(cin, charges_item);
        charges[i] = charges_item;
    }
    
    string result = find_fraudulent_merchants(
        non_fraud_codes, 
        fraud_codes, 
        mcc_thresholds, 
        merchant_mcc_map, 
        min_charges, 
        charges
    );
    
    // fout << result << "\n";
    // fout.close();
    
    // Output to console for general purpose
    cout << result << endl;

    return 0;
}

