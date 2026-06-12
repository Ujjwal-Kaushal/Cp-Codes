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

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }

    vector<char> h(n + 2, 0);
    vector<char> g(n + 2, 0);

    int z = 0;

    for(int i = n; i >= 1; i--) {
        int add = i + 1;

        if(add <= n && v[add] > 0 && h[add] == 0)
            z++;

        int rem = i + k + 1;

        if(rem <= n && v[rem] > 0 && h[rem] == 0)
            z--;

        g[i] = (z > 0);

        if(v[i] > 0) {

            if(g[i]) {
                h[i] = 1;
            } 
            else {
                h[i] = ((v[i] - 1) & 1);
            }
        }
    }

    bool is = false;

    for(int i = 1; i <= n; i++) {
        
        if(v[i] == 0)
            continue;

        bool flag;

        if(g[i]) {
            flag = true;
        } 
        
        else {
            flag = ((v[i] - 1) & 1);
        }

        if(flag) {
            is = true;
            break;
        }
    }

    cout << (is ? "YES" : "NO") << '\n';
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