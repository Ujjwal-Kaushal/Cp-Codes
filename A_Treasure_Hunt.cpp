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
#define MOD 1000000007

void solve()
{
    int x,y,a;
    cin >> x >> y >> a;

    int s = a % (x + y);
    if(!s)
    {
        cout << "NO\n";
    }
    else
    {
        if(x > s)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}