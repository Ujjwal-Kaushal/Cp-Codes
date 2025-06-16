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

void solve() {
    int n, m, k;
    string s;
    cin >> n >> m >> k >> s;
    
    vector<int> zeros;
    int current = 0;
    for (char c : s) {
        if (c == '0') {
            current++;
        } else {
            if (current >= m) {
                zeros.push_back(current);
            }
            current = 0;
        }
    }
    if (current >= m) {
        zeros.push_back(current);
    }
    
    int res = 0;
    for (int len : zeros) {
        res += (len + k - 1) / k;
    }
    cout << res << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}