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
    int n,m;
    cin >> n >> m;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
            cin >> v[i][j];
    }

    int mn = INT_MAX;
    int ans = 0, ng = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(v[i][j] < 0) ng++;
            mn = min(mn, abs(v[i][j]));
            ans += abs(v[i][j]);
            
        }
    }
    if(ng % 2) cout << ans - 2*mn << "\n";
    else cout << ans << "\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}