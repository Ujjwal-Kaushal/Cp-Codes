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

int val[3001][6001], lo[6001], hi[6001], vis[6001], T;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int lim = n / 2;
    for (int len = 1; len <= lim; len++) {
        for (int i = 0; i <= n; i++) val[len][i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int mn = a[i], mx = a[i];
        T++;
        for (int j = i; j < n; j++) {
            if (vis[a[j]] == T) break;
            vis[a[j]] = T;
            mn = min(mn, a[j]);
            mx = max(mx, a[j]);
            int len = j - i + 1;
            if (mx - mn + 1 == len && len <= lim) {
                val[len][i] = mn;
            }
        }
    }

    for (int len = lim; len >= 1; len--) {
        vector<int> active;
        for (int i = 0; i <= n - len; i++) {
            int v = val[len][i];
            if (v > 0) {
                if (lo[v] == -1) {
                    lo[v] = i;
                    active.push_back(v);
                }
                hi[v] = i;
            }
        }

        for (int v : active) {
            int target = v + len;
            if (target <= n && lo[target] != -1) {
                if (lo[v] + len <= hi[target] || lo[target] + len <= hi[v]) {
                    cout << len << "\n";
                    for (int x : active) lo[x] = -1;
                    return;
                }
            }
        }
        for (int x : active) lo[x] = -1;
    }

    cout << 0 << "\n";
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    memset(lo, -1, sizeof(lo));
    while(t--)
    {
        solve();
    }

    return 0;
}