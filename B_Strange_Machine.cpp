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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> a(q);
    for (int i = 0; i < q; i++) cin >> a[i];

    int fl = 0;
    for(int i = 0; i<n; i++) {
        if(s[i] == 'B') {
            fl = 1;
            break;
        }   
    }
    for (int i = 0; i < q; i++) {
        int x = a[i], steps = 0, pos = 0;
        while (x > 0) {
            if(!fl) {
                cout << x << "\n";
                break;
            }
            if (s[pos] == 'A') x -= 1;
            else x /= 2;
            steps++;
            pos = (pos + 1) % n;
        }
        if(fl) cout << steps << "\n";
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