#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string can_make_universal(const string& s, int k) {
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    
    if (s < rev_s) {
        return "YES";
    }
    
    if (k == 0) {
        return "NO";
    }
    
    int n = s.length();
    if (n == 1) {
        return "NO";
    }
    
    if (s == rev_s) {
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (s[i] != s[j]) {
                    string new_s = s;
                    swap(new_s[i], new_s[j]);
                    string new_rev = new_s;
                    reverse(new_rev.begin(), new_rev.end());
                    if (new_s < new_rev) {
                        return "YES";
                    }
                }
            }
        }
        return (k >= 2) ? "YES" : "NO";
    }
    
    int first_diff = 0;
    while (first_diff < n && s[first_diff] == rev_s[first_diff]) {
        first_diff++;
    }
    
    for (int j = first_diff + 1; j < n; ++j) {
        if (s[j] < rev_s[first_diff]) {
            return "YES";
        }
    }
    
    return (k >= 2) ? "YES" : "NO";
}

vector<string> process_test_cases() {
    int t;
    cin >> t;
    vector<string> results;
    for (int _ = 0; _ < t; ++_) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        results.push_back(can_make_universal(s, k));
    }
    return results;
}

int main() {
    vector<string> results = process_test_cases();
    for (const string& result : results) {
        cout << result << endl;
    }
    return 0;
}