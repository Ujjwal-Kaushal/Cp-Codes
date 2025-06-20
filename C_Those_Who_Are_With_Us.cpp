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
    
    int a[n][m];
    int mx = INT_MIN;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] > mx) mx = a[i][j];
        }
    }

    vector<int> v1(n,0),v2(m,0);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(a[i][j] == mx)
            {
                v1[i]++;
            }
        }
    }
    
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(a[j][i] == mx)
            {
                v2[i]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(a[i][j] == mx)
                ++cnt;
        }
    }

    int fl = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int overlap = 0;
            if(a[i][j] == mx)
            {
                overlap = 1;
            }
            if(v1[i] + v2[j] - overlap == cnt)
            {
                fl = 1;
                break;
            }
        }
    }
    if(fl) cout << mx-1 << "\n";
    else cout << mx << "\n";

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
