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

    for(int i = 0; i<n; i++) {
        int b;
        cin >> b;
        
        if(b == 0) continue;
        string t;
        cin >> t;

        for(int j = 0; j<b; j++) {
            if(t[j] == 'D') v[i]++;
            else if(t[j] == 'U') v[i]--;
            if(v[i] < 0) v[i] += 10;
            if(v[i] > 9) v[i] -= 10;
        }
    }
    
    for(int i = 0; i<n; i++) cout << v[i] << ' ';
    cout << '\n';
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