#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
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
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

void solve()
{
    int n;
    cin >> n;

    vector<pair<int,int>> v;
    for(int i = 0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        v.pb({a,b});
    }

    sort(v.begin(), v.end());

    int ans = 1, cnt = 1;
    for(int i = 1; i<n; i++) {
        if(v[i].first >= v[i-1].second) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 1;
        }
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