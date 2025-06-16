#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353

int dx[4] = {-1,1,-1,1}, dy[4] = {-1,-1,1,1};
void solve()
{
    int a,b;
    cin >> a >> b;

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    set<pair<int,int>> s1,s2;
    for(int i = 0; i<4; i++)
    {
        s1.insert({x1+dx[i]*a, y1+dy[i]*b});
        s2.insert({x2+dx[i]*a, y2+dy[i]*b});
        s1.insert({x1+dx[i]*b, y1+dy[i]*a});
        s2.insert({x2+dx[i]*b, y2+dy[i]*a});
    }
    int ans = 0;
    for(auto x : s1)
    {
        if(s2.find(x) != s2.end()) ans++;
    }
    cout << ans << "\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}