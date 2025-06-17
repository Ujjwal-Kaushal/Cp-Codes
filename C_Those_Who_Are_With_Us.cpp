#include <bits/stdc++.h>
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
    int n, m;
    cin >> n >> m;
    
    int v[n+1][m+1];
    int mx = INT_MIN;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            int a;
            cin >> a;
            v[i][j] = a;
            mx = max(mx,v[i][j]);
        }
    }
    vector<pair<int,int>> vp;
    
    for(int i = 1; i<=n ;i++)
    {
        for(int j = 1; j<=m; j++)
        {
            if(v[i][j] == mx)
            {
                vp.pb({i,j});
            }
        }
    }

    

    for(int r = 1; r <= n; ++r)
    {
        for(int c = 1; c <= m; ++c)
        {
            
        }
    }



}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
