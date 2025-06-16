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

void solve()
{
    int n,x,y;
    cin >> n >> x >> y;
    
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    map<pair<int,int>,int> mp;
    int ans = 0;
    for(int i : v)
    {
        int xmod = i % x;
        int ymod = i % y;
        pair<int,int> p = {(x - xmod) % x, ymod};
        ans += mp[p];
        mp[{xmod,ymod}]++;
    }
    cout << ans << "\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}