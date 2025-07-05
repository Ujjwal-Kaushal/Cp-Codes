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

int help(vector<int>& dp, int i, int n, string s)
{
    if(i > s.size()) return dp[i];

    if(dp[i] != -1) return dp[i];

    
}

void solve()
{
    int n;
    cin >> n;

    vector<int> dp(n+1,-1);
    string t = to_string(n);
    cout << help(dp,0,n,t) << "\n";
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