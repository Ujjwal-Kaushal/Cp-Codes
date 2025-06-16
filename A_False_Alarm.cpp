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

    vi v(n+1);
    for(int i = 1; i<=n; i++) cin >> v[i];

    int i2= 0,i1 = 0;
    for(int i = n; i>=1; i--)
    {
        if(v[i] == 1)
        {
            i2 = i;
            break;
        }
    }
    for(int i = 1; i<=n; i++)
    {
        if(v[i] == 1)
        {
            i1 = i;
            break;
        }
    }
    if(x > i2 - i1) cout << "YES\n";
    else cout << "NO\n";
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