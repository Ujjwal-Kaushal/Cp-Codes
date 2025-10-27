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
    int n, k;
    cin >> n >> k;

    if(n % 2 == 0) {
        cout << n + k * 2 << endl;
    }

    else {
        int x = 0;
        for(int i = 2; i*i <= n; ++i) {
            if(n % i == 0) {
                x = i;
                break;
            }
        }
        if(x == 0) {
            n += n;
        }
        else {
            n += x;
        }
        cout << n + (k - 1) * 2 << endl;
    }

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