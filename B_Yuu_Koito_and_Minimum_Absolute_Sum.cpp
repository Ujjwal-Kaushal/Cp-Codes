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

    vi v(n);
    for(int i = 0; i<n; i++) {
        cin >> v[i];
    }

    if(v[0] == -1 && v[n-1] == -1) {
        v[0] = 0;
        v[n-1] = 0;
    }
    else if(v[0] == -1) {
        v[0] = v[n-1];
    }
    else if(v[n-1] == -1) {
        v[n-1] = v[0];
    }

    cout << abs(v[n-1] - v[0]) << "\n";
    for(int i = 0; i<n; i++) {
        if(v[i] == -1) {
            v[i] = 0;
        }
    }
    for(int i : v) cout << i << " ";
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