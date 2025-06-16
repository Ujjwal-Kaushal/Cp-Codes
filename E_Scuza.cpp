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
    int n,q;
    cin >> n >> q;
    vi a(n),k(q);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<q; i++) cin >> k[i];

    vi pref(n);
    pref[0] = a[0];
    for(int i = 1; i<n; i++) pref[i] = pref[i-1] + a[i];

    
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