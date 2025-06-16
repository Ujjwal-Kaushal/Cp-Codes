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

    // for(int i = 0; i<n; i++)
    // {
    //     sort(v[i].begin(),v[i].end());
    // }
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m-1; j++)
        {
            if(v[i][j] < 0 && v[i][j+1] < 0)
            {
                v[i][j] = abs(v[i][j]);
                v[i][j+1] = abs(v[i][j+1]);
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++) ans += v[i][j];
    }
    cout << ans << "\n";
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