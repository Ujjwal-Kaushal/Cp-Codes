#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
    int n, q;
    cin >> n >> q;

    vi v(n);
    for(int i = 0; i<n; i++) {
        cin >> v[i];
    }
    vi diff(n+1, 0);
    for(int i = 0; i<q; i++) {
        int l,r;
        cin >> l >> r;
        l--; r--;
        diff[l]++;
        diff[r+1]--;
    }

    for(int i = 1; i<n; i++) {
        diff[i] += diff[i-1];
    }

    sort(v.begin(), v.end(), greater<int>());
    sort(diff.begin(), diff.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i<n; i++) {
        ans = ans + (v[i] * diff[i]);
    }
    cout << ans << "\n";

}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    //while(t--)
    //{
        solve();
    //}

    return 0;
}