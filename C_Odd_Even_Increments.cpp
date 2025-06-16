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
    int n;
    cin >> n;

    vi v(n+1);
    for(int i = 1; i<=n; i++) cin >> v[i];

    int f1 = 0,f2 = 0;
    for(int i = 1; i<=n; i+=2)
    {
        if(v[i] % 2 == 0) f1 = 1;
        else f2 = 1;
    }
    if(f1 && f2)
    {
        cout << "NO\n";
        return;
    }
    int c1 = 0, c2 = 0;
    for(int i = 2; i<=n; i += 2)
    {

        if(v[i] % 2 == 0) c1 = 1;
        else c2 = 1;
    }
    if(c1 && c2)
    {
        cout << "NO\n";
        return;
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