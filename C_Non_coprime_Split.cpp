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

int get_prime(int n) {
    for(int i = 2; i*i <= n; ++i) {
        if(n % i == 0) {
            return i;
        }
    }
    return n;
}
void solve()
{
    int l,r;
    cin >> l >> r;

    if(r <= 3) {
        cout << -1 << "\n";
    }

    else if(l < r) {
        if(r % 2 != 0) r--;
        cout << 2 << " " << r - 2 << "\n";
    }

    else {
        int p  = get_prime(l);
        if(p == l) {
            cout << "-1\n";
        }
        else {
            cout << p << " " << l - p << "\n";
        }
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