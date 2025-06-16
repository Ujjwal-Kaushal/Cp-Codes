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
    int n,k;
    cin >> n >> k;
    
    int res = 1;
    for(int i = 0; i<k; i++) res = (res * n) % MOD;
    cout << res     << "\n";
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