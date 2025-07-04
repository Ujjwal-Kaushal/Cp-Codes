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
    int w,h,a,b;
    cin >> w >> h >> a >> b;

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int is = 0;
    if(x1 == x2)
    {
        if((y2 - y1) % b == 0) is = 1;
    }
    else if(y1 == y2)
    {
        if((x2 - x1) % a == 0) is = 1;
    }
    else
    {
        if((x2 - x1) % a == 0 || (y2 - y1) % b == 0)
        {
            is = 1;
        }
    }
    if(is) cout << "YES\n";
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