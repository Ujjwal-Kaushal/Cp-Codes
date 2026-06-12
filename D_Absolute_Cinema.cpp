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

void solve()
{
    int n;
    cin >> n;

    vi f(n);
    for(int i = 0; i<n; i++) cin >> f[i];

    vi ans(n);
    for(int i = 1; i<n-1; i++) {
        int val = f[i+1] + f[i-1] - 2*f[i];
        if(val % 2 == 0) {
            ans[i] = val/2;
        }
        
    }

    auto func = [&](int i) {
        int x = f[i];
        for(int j = 1; j<n-1; j++) {
            x -= ans[j] * abs(j - i);
        }
        return x;
    };

    int g1 = func(0);
    int gn = func(n-1);

    ans[0] = gn/(n-1);
    ans[n-1] = g1/(n-1);

    for(int i = 0; i<n; i++) cout << ans[i] << ' ';
    cout << "\n";
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