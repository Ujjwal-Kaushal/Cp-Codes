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
    vector<pair<int,int>> v;
    
    for(int i = 0; i<n; i++)
    {   
        int a,b;
        cin >> a >> b;
        v.pb({a,b});
        
    }
    
    for(int i = 1; i<n; i++)
    {
        if(v[i].first >= v[0].first && v[i].second >= v[0].second)
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << v[0].first << "\n";

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