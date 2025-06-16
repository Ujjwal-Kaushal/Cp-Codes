#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define pb push_back

void solve()
{
    ll n = 1, k = 1;
    cin >> n >> k;
    vll v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vll prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }

    ll ans = 0;
    for (int i = 0; i <= k; i++) {
        if (2 * i <= n) {  
            ll sum = prefix[n - (k - i) - 1];
            if (2 * i > 0) {
                sum -= prefix[2 * i - 1];
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
