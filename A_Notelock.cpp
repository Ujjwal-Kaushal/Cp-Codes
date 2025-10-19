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
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    // vi temp;
    // int zero = 0;
    // for(int i = 0; i<n; i++) {
    //     if(s[i] == '0') zero++;
    //     if(s[i] == '1') temp.pb(i+1);
    // }

    // if(k == 1 && n == 1) {cout << "0\n"; return;}
    // if(zero == n) { cout << "0\n"; return;}
    // int cnt = 1;    
    // for(int i = 1; i<temp.size(); i++) {
    //     if(temp[i] - temp[i-1] == k) cnt++;
    // }
    // cout << cnt << "\n";

    int ans = 0;
    int temp = -k;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            if (i - temp >= k) {

                ans++;
            }
            temp = i;
        }
    }

    cout << ans << endl;



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