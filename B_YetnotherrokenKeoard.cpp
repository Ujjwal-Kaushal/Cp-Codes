#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
    string s;
    cin >> s;

    

    // for(int i = 0; i<s.size(); i++) {
    //     if(s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B' || s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b') {
    //         ans.pb(s[i]);
    //     }
    //     if(s[i] == 'B' && !ans.empty()) {
    //         int sz = ans.size();
    //         for(int j = sz-1; j>=0; j--) {
    //             if(ans[j] >= 'A' && ans[j] <= 'Z') {
    //                 ans.erase(ans.begin() + j);
    //                 break;
    //             }
    //         }
    //     }
    //     if(s[i] == 'b' && !ans.empty()) {
    //         int sz = ans.size();
    //         for(int j = sz-1; j>=0; j--) {
    //             if(ans[j] >= 'a' && ans[j] <= 'z') {
    //                 ans.erase(ans.begin() + j);
    //                 break;
    //             }
    //         }
    //     }
    // }
    // cout << ans << "\n";

    vector<pair<int,char>> up, lo;
    for(int i = 0; i<s.size(); i++) {
        if(isupper(s[i]) && s[i] != 'B') {
            up.pb({i, s[i]});
        }
        else if(islower(s[i]) && s[i] != 'b') {
            lo.pb({i, s[i]});
        }
        else if(s[i] == 'B') {
            if(!up.empty()) {
                up.pop_back();
            }
        }
        else if(s[i] == 'b') {
            if(!lo.empty()) {
                lo.pop_back();
            }
        }
    }

    vector<pair<int,char>> ans;
    for(int i = 0; i<up.size(); i++) {
        ans.pb(up[i]);
    }
    for(int i = 0; i<lo.size(); i++) {
        ans.pb(lo[i]);
    }

    sort(ans.begin(), ans.end());
    for(auto it: ans) {
        cout << it.second;
    }
    cout << endl;
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