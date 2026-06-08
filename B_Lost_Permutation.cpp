#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353
// #define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
void solve() {
    int m,s;
    cin >> m >> s;

    vi v(m);
    for(int i = 0; i<m; i++) cin >> v[i];

    set<int> st(v.begin(), v.end());
    int mx = *st.rbegin();


    for(int i = 1; i<=mx; i++) {
        if(st.find(i) == st.end()) {
            s -= i;
        }
    }

    int cur = mx+1;
    while(s > 0) {
        s -= cur;
        cur++;
    }

    cout << (s == 0 ? "YES\n" : "NO\n");
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}