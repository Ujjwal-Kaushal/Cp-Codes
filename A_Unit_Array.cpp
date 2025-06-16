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
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    int minus = 0, posi = 0;
    for(int i : v)
    {
        if(i == -1) minus++;
        else posi++;
    }
    int ans = 0;
    while(posi < minus || minus % 2 == 1)
    {
        ans++;
        posi++;
        minus--;
    }
    cout << ans << "\n";
}
int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--) solve();
    
    return 0;
}