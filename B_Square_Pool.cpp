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
    int n,s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < n; ++i) 
    {
        int dx, dy, x, y;
        cin >> dx >> dy >> x >> y;
        if ((dx == dy && x == y) || (dx == -dy && x + y == s))
            ans++;
    }
    cout << ans << "\n";
}

int32_t main() 
{
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}