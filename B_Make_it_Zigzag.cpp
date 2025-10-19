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
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> p(n);
    p[0] = a[0];
    for (int i = 1; i < n; ++i) {
        p[i] = max(p[i - 1], a[i]);
    }

    vector<long long> b(n);

    for (int i = 1; i < n; i += 2) {
        b[i] = p[i];
    }

    for (int i = 0; i < n; i += 2) {
        long long upper_bound = p[i];
        
        if (i > 0) {
            upper_bound = min(upper_bound, b[i - 1] - 1);
        }
        
        if (i < n - 1) {
            upper_bound = min(upper_bound, b[i + 1] - 1);
        }
        b[i] = upper_bound;
    }

    long long total_cost = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            total_cost += a[i] - b[i];
        }
    }

    cout << total_cost << endl;


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