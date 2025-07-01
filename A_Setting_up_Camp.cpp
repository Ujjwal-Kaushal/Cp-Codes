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
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    if(b % 3 == 0 || (3 - b % 3) <= c)
    {
        if(b % 3 == 0)
        {
            ans = a + b/3 + c/3;
            c -= 3*(c/3);
            ans += c/2;
            c -= 2*(c/2);
            ans += c;
        }
        else
        {
            c -= (3 - (b % 3));
            ans = a + b/3 + 1 + c/3;
            c -= 3*(c/3);
            ans += c/2;
            c -= 2*(c/2);
            ans += c;   
        }
        cout << ans << "\n";
    }
    else cout << -1 << "\n";
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