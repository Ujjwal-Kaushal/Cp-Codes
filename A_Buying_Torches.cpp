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
    int x,y,k;
    cin >> x >> y >> k;

    int ans = y*k + k-1;
    int res = ans / (x-1);
    int temp = ans % (x-1);
    if(temp) res++;
    cout << res + k << endl;
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