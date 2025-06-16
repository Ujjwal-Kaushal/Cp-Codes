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
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    n = unique(v.begin(),v.end()) - v.begin();
    int ans = n;
    for(int i = 0; i+2 < n; ++i)
    {
        ans -= (v[i] < v[i+1] && v[i+1] < v[i+2]);
        ans -= (v[i] > v[i+1] && v[i+1] > v[i+2]);
    }
    cout << ans << "\n";
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