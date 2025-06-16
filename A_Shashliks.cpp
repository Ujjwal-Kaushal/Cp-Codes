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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    int ans = 0;

    if(x >= y)
    {
        if(k >= b)
        {
            int cnt1 = (k - b)/y + 1;
            ans += cnt1;
            k -= cnt1 * y;
        }
        if(k >= a)
        {
            int cnt1 = (k - a)/x + 1;
            ans += cnt1;
        }

    }
    else
    {
        if(k >= a)
        {
            int cnt2 =  (k - a)/x + 1;
            ans += cnt2;
            k -= cnt2 * x;
        }
        if(k >= b)
        {
            int cnt2 = (k - b)/y + 1;
            ans += cnt2;
            k -= cnt2 * y;
        }
    }
    cout << ans << "\n";
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
