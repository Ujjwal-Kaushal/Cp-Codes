#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(), v.end())
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

bool pal(string &x) {
    int l = 0, r = x.size() - 1;
    while (l < r) {
        if (x[l++] != x[r--]) return 0;
    }
    return 1;
}

bool inc(string &p) {
    for (int i = 1; i < p.size(); i++) {
        if (p[i] < p[i - 1]) return 0;
    }
    return 1;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    bool f = 0;

    for (int m = 0; m < (1 << n); m++) {

        string p = "", x = "";
        vector<int> v;

        for (int i = 0; i < n; i++) {
            if (m & (1 << i)) {
                p += s[i];
                v.push_back(i + 1);
            } 
            else {
                x += s[i];
            }
        }

        if (inc(p) && pal(x)) {
            cout << v.size() << "\n";
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << (i + 1 == v.size() ? '\n' : ' ');
            f = 1;
            break;
        }
    }

    if (!f) cout << -1 << "\n";
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
