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
    int n,m;
    cin >> n >> m;

    char a[n+1][m+1];

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++) 
            cin >> a[i][j];
    }

    for(int i = n-1; i>=1; i--)
    {
        for(int j = 1; j<=m; j++)
        {
            if(a[i][j] == '.' || a[i][j] == 'o') continue;
            else
            {
                // a[i][j] = '.';
                for(int k = j; k<=n; k++)
                {
                    if(a[i][k] == '.') continue;
                    if(a[i][k] == 'o' || a[i][k] == '*')
                    {
                        a[i][k-1] = '*';
                        break;
                    }
                }
                a[i][j] = '.';x 
            }
        }
    }

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
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