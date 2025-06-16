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
    int n,q;
    cin >> n >> q;

    vi v1(n), v2(q);

    for(int i = 0; i<n; i++) cin >> v1[i];
    for(int i = 0; i<q; i++) cin >> v2[i];

    int prev = 31;
    for(int i = 0; i<q; i++)
    {
        if(v2[i] >= prev) continue; 
        int val = pow(2,v2[i]);
        for(int j = 0; j<n; j++)
        {
            if(v1[j] % val == 0)
            {
                v1[j] += (val/2);
            }
        }
        prev = v2[i];
    }
    for(auto i : v1) cout << i << ' ';
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