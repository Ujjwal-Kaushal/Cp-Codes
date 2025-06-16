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

void solve()
{
    int l,r,d,u;
    cin >> l >> r >> d >> u;

    if(l == r && r == d && d == u)  cout << "Yes" << endl;
    else cout << "No" << endl;
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