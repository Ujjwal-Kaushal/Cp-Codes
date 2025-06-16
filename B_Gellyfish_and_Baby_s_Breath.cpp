#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n), q(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> q[i];
        }
        
        vector<long long> r(n);
        vector<long long> pow2(n);
        for (int i = 0; i < n; i++) {
            pow2[i] = power(2, i, MOD);
        }
        
        for (int i = 0; i < n; i++) {
            long long maxVal = 0;
            
            for (int j = 0; j <= i; j++) {
                long long val = (pow2[p[j]] + pow2[q[i-j]]) % MOD;
                maxVal = max(maxVal, val);
            }
            
            r[i] = maxVal;
        }
        
        for (int i = 0; i < n; i++) {
            cout << r[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}