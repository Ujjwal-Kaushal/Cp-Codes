#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
    
    int n,a,b;
    cin >> n >> a >> b;
    if(n < 3) {
        cout << min(a*n, b) << "\n"; 
        return;
    }
    int div = n/3;
    int rem = n % 3;
    int ans = min(a*n, b*div);
    if(rem != 0) {
        ans += min(rem*a, b);
        // cout << ans << " ";

    }
    int res = a*n;
    cout << min(ans,res) << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        solve();

    }

    return 0;
}