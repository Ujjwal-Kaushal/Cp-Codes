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

    vector<int> v(n+1);
    vector<pair<int,int>> temp;
    
    for(int i = 1; i<=n; i++) {
        cin >> v[i];
    }

    for(int i = 1; i<=n; i++) {
        if(i > v[i]) {
            temp.push_back({v[i], i});
        }
    }

    sort(temp.begin(), temp.end());
    int ans = 0;
    for(int i  = 0; i<temp.size(); i++) {
        int l = 0, h = temp.size()-1;
        int idk = -1;
        while(l <= h) {
            int mid = l + (h - l)/2;
            if(temp[mid].first > temp[i].second) {
                idk = mid;
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        if(idk != -1) ans += (temp.size() - idk);
    }

    cout << ans << "\n";






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