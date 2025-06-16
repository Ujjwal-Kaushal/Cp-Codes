#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1000000007
void solve() {
    string s;
    getline(cin, s);
    
    vector<string> ans;
    string temp = "";
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            if(!temp.empty()) {
                ans.push_back(temp);
                temp = "";
            }
        }
        else {
            temp.push_back(s[i]);
        }
    }
    
    if(!temp.empty()) {
        ans.push_back(temp);
    }
    
    string res = "";
    for(int i = 0; i < ans.size(); i++) {
        string c = ans[i];
        if(!c.empty()) {
            res.push_back(c[0]);
        }
    }
    
    cout << res << endl;
}

int32_t main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while(t--) {
        solve();
    }
    
    return 0;
}