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
    ll n = 1;
    cin >> n;
    vll v(n);
    
    int neg = 0, ans = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        if(v[i] < 0)
        {
            neg++;
            v[i] *= -1;
        }
        ans = ans + v[i];
    }
    sort(v.begin(), v.end());
    if(neg & 1) ans = ans - 2 * v[0];
    
    cout << ans << "\n";
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