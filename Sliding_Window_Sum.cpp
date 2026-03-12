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
    int n,k;
    cin >> n >> k;

    int x,a,b,c;
    cin >> x >> a >> b >> c;

    vi v(n);
    v[0] = x;

    for(int i = 1; i<n; i++) {
        v[i] = (v[i-1]*a + b) % c;
    }

    int i = 0,j = 0;
    vi sums;
    int sum = 0;
    int cnt = 0;
    while(i < n) {
        ++cnt;
        sum += v[i];
        if(cnt >= k) {
            sums.pb(sum);
            sum -= v[j++];
        }
        i++;
    }

    int ans = 0;
    for(int i = 0; i<sums.size(); i++) {
        ans ^= sums[i];
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