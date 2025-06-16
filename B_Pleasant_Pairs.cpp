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
    for(int i = 0; i<n; i++) cin >> v[i];


    vector<pair<int,int>> p;
    for(int i = 0; i<n; i++)
    {
        p.push_back({v[i],i+1});
    }
    sort(p.begin(),p.end());

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(p[i].first * p[j].first >= 2*n) break;
            else if(p[i].first * p[j].first == p[i].second + p[j].second) ans++; 
        }
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