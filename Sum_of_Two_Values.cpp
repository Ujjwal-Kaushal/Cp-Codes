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
    int n,x;
    cin >> n >> x;

    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    // int l = 0, r = n - 1;
    // vector<pair<int,int>> ans;
    // while(l <= r)
    // {
    //     if(v[l] + v[r]  == x)
    //     {
    //         ans.pb({l, r});
    //         break;
    //     }
    //     else if(v[l] < abs(v[r] - x))
    //     {
    //         l++;
    //     }
    //     else if(v[r] > abs(v[l] - x))
    //     {
    //         r--;
    //     }
    //     else
    //     {
    //         l++;
    //         r--;
    //     }
    // }
    // if(ans.empty()) cout << "IMPOSSIBLE\n";
    // else cout << ans[0].first + 1 << " " << ans[0].second + 1<< "\n";
    map<int, int> mp;
    

    for(int i = 0; i<n; i++)
    {
        if(mp.count(x - v[i]))
        {
            cout <<mp[x - v[i]] + 1 << " " << i+1 << "\n";
            return;
        }
        mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE\n";
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