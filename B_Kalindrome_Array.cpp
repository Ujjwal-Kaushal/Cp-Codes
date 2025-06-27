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

bool help(vi& v, int x)
{
    vi b;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] != x) b.pb(v[i]);
    }

    bool is = true;
    for(int i = 0; i<b.size(); i++)
    {
        if(b[i] != b[b.size()-i-1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;

    vi v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    
    for(int i = 0; i<n; i++)
    {
        if(v[i] != v[n-i-1])
        {
            if(help(v, v[i]) || help(v, v[n-i-1]))
            {
                cout << "YES\n";
                return;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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