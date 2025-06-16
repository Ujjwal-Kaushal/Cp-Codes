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
    int x,n,m;
    cin >> x >> n >> m;
    int c = x, lim = n+m;
    int l = lim;    
    while(lim--)
    {
        int temp = ceil(x/2);
        x = temp;
    }
    while(l--)
    {
        int temp = c/2;
        c = temp;
    }
    cout << c << " " << x << endl;

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}