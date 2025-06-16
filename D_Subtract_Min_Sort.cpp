#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    ll n;
    cin >> n;
    vll ve(n);
    for (ll &i : ve) cin >> i;
    ll j = 0;
    for (ll i = 1; i < n; i++) {
        if (ve[i-1] > ve[i]) j = i;
    }
    if (j == 0) { // all done
        cout << "YES\n";
        return;
    }
    auto fop = [&](ll i) {
        ll minN = min(ve[i], ve[i+1]);
        ve[i] -= minN;
        ve[i+1] -= minN;
    };
    for (ll i = 0; i < j; i++) {
        fop(i);
    }
    cout << (is_sorted(ve.begin(), ve.end()) ? "YES" : "NO") << '\n';
}
int32_t main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}