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

    set<int> s1,s2;

    s1.insert(v[0]);
    int ans = 1;
    
    for(int i = 1; i<n; i++)
    {
        if(s1.empty())
        {
            s1 = s2;
            s2.clear();
            ans++;
        }
        if(s1.find(v[i]) != s1.end())
        {
            s1.erase(v[i]);
            s2.insert(v[i]);
        }
        else s2.insert(v[i]);
    }
    if(s1.empty()) ans++;
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