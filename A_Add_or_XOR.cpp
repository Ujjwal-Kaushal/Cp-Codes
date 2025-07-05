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
    int a,b,x,y;
    cin >> a >> b >> x >> y;

    if(a == b) 
    {
        cout << 0 << "\n";
        return;
    }
    if(a > b) 
    {
        if (a % 2 != 0 && a - 1 == b) 
        {
            cout << y << "\n";
        } else {
            cout << -1 << "\n";
        }
        return;
    }    
    int diff = b - a;
    int temp = min(2 * x, x + y);
    int check = (diff / 2)*temp;

    if (diff % 2 != 0) 
    {
        if (a % 2 != 0) 
        { 
            check += x;
        } else 
        {
            check += min(x, y);
        }
    }
    cout << check << "\n";

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