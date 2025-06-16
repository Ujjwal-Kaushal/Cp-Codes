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
    int n,m,k;
    cin >> n >> m >> k;

    vi a(n),b(m);
    for(int i = 0; i<n; i++) cin >> a[i];

    for(int i = 0; i<m; i++) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<bool> res(k+1,false);
    for(int i = 0; i < (k/2); i++)
        res[a[i]] = true;
    for(int i = 0; i < (k/2); i++)
        res[b[i]] = true;

    int cnt = k/2;
    for(int i = 1; i<=k; i++)
    {
        if(!res[i])
        {
            cout << i << " ";
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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