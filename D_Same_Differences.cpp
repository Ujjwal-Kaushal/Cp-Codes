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
    int n;
    cin >> n;

    vi v(n+1,0);
    unordered_map<int,int> mp;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] -= i;
        ans += mp[v[i]];
        mp[v[i]]++;
    }

    cout << ans << endl;
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