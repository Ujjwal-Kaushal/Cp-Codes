#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
    int n,x;
    cin >> n >> x;

    vi v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    vi pref(n);
    pref[0] = v[0];
    for(int i = 1; i<n; i++)
    {
        pref[i] = pref[i-1] + v[i];
    }
    int a1 = 0, a2 = 0;
    a1 = ceil(1.0*pref[n-1]/x);
    for(int i = 0; i<n; i++)
    {
        a2 = a2 + ceil(1.0*v[i]/x);
    }
    cout << a1 << ' ' << a2 << "\n";
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}