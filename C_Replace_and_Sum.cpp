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
    int n,q;
    cin >> n >> q;
    vector<int> a(n), b(n);

    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<n; i++) cin >> b[i];

    vector<pair<int,int>> v;
    for (int i = 0; i<q; i++) {
        int l,r;
        cin >> l >> r;
        v.push_back({l,r});
    }

    vector<int> pref(n+1,0);
    for (int i = n-1; i >= 0; --i) {
        if (i == n-1) {
            a[i] = max(a[i], b[i]);
        } else {
            a[i] = max({a[i], a[i+1], b[i]});
        }
    }

    
    for (int i = 0; i<n; i++) {
        pref[i+1] = pref[i] + a[i];
    }

    for (int i = 0; i<q; i++) {

        int l = v[i].first;
        int r = v[i].second;
        
        cout << pref[r] - pref[l-1] << ' '; 
    }
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