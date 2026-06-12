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
// #define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int help(int n, int t, int x) {
    int c = 0;
    while (n > t) {
        n /= x;
        c++;
    }
    return c + (t - n);
}

void solve() {
    int a, b, x;
    cin >> a >> b >> x;

    int ans = abs(a - b);

    int ta = a;
    for (int c1 = 0; ; ++c1) {
        ans = min(ans, c1 + help(b, ta, x));
        if (ta == 0) break;
        ta /= x;
    }

    int tb = b;
    for (int c2 = 0; ; ++c2) {
        ans = min(ans, c2 + help(a, tb, x));
        if (tb == 0) break;
        tb /= x;
    }

    cout << ans << endl;
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}