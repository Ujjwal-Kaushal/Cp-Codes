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

    vi v(m);
    for(int i = 0; i<m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vi vv;
    for(int i = 0; i<m-1; i++)
    {
        vv.pb(v[i+1] - v[i] - 1);
    }
    vv.pb(v[0] + n - v[m-1] - 1);
    sort(vv.rbegin(), vv.rend());

    int numsafe = 0, numdays = 0;
    
    for(auto& gap : vv)
    {
        int cgap = gap - 2 * numdays;
        if(cgap > 0)
        {
            numsafe++;
            cgap -= 2;
            if(cgap > 0) numsafe += cgap;
            numdays += 2;

        }
    }
    cout << n - numsafe << "\n";
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