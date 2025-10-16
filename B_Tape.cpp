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
    int n,m,k;
    cin >> n >> m >> k;

    vi v(n);
    for(int i = 0; i<n; i++) {
        cin >> v[i];
    }
    
    vi gaps;
    for(int i = 1; i<n; i++) {
        gaps.pb(v[i] - v[i-1] - 1);
    }
    sort(gaps.begin(), gaps.end(), greater<int>());
    
    int ans = v[n-1] - v[0] + 1;
    for(int i = 0; i<k-1 && i < gaps.size(); i++) {
        ans -= gaps[i];
    }
    cout << ans << "\n";
}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();

    return 0;
}