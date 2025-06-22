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
    int n, x, m;
    cin >> n >> x >> m;
    int l = x, r = x;

    for(int i = 0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;

        if(a > r || b < l)
        {
            continue;
        }
        l = min(l,a);
        r = max(r,b);
    }
    cout << r - l + 1 << "\n";
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