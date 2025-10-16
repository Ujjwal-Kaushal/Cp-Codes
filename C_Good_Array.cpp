#include<bits/stdc++.h>
using namespace std;
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

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    for(int i = 0; i<n; i++) {
        cin >> v[i];
    }

    vi res;
    int ans = 0;
    int sum = accumulate(v.begin(), v.end(), 0LL);
    int mx = 0;
    int idx = -1;
    for(int i = 0; i<n; i++) {
        if(mx < v[i]) {
            idx = i;
            mx = v[i];
        }
    }

    int smx = 0;
    for(int i = 0; i<n; i++) {
        if(v[i] <= mx && i != idx) {
            smx = max(smx, v[i]);
        }
    }
    // cout<<mx<<"\n";
    // cout << smx << " " << mx << "\n";
    for(int i = 0; i<n; i++) {
        if(v[i] != mx) {
            int t = sum - v[i] - mx;
            if(t == mx) {
                ans++;
                res.pb(i+1);
            }
        }
        else {
                int t = sum - v[i] - smx;
                if(t == smx) {
                    ans++;
                    res.pb(i+1);
                }
            }

    }
    cout << ans << "\n";
    for(int i : res) {
        cout << i << " ";
    }
    cout << "\n";
    

}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();

    return 0;
}