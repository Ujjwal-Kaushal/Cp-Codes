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
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
    int n,q;
    cin >> n >> q;
    
    vi v(n+1),pref(n+1);
    for(int i = 1; i<=n; i++) cin >> v[i];
    pref[1] = v[1];
    for(int i = 2; i<=n; i++)
    {
        pref[i] = pref[i-1] + v[i];
    }
    for(int i = 0; i<q; i++)
    {   
        int l,r,k;
        cin >> l >> r >> k;

        int sum = pref[n];

        int seg = pref[r] - pref[l-1];
        int len = r-l+1;

        sum = sum - seg + len*k;
        if(sum % 2) cout << "YES\n";
        else cout << "NO\n";

    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}