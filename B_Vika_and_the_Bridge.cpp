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
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    map<int,vector<int>> mp1,mp2;

    for(int i = 0; i<n; i++)
    {
        mp1[v[i]].push_back(i+1);
    }
    for(auto i : mp1)
    {
        vector<int>& p = i.second;
        mp2[i.first].push_back(p[0] - 1);
        for(int j = 1; j<p.size(); j++)
        {
            mp2[i.first].push_back(p[j] - p[j-1] - 1);
        }
        mp2[i.first].push_back(n - p.back());
    }

    int ans = LLONG_MAX;
    for(auto i : mp2)
    {
        vector<int>& p = i.second;
        sort(p.begin(),p.end(),greater<int>());

        int value = max(p[0]/2,p[1]);
        ans = min(ans,value);
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