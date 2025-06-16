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

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt = 0;

    vector<int> ans(n,0);
    unordered_map<char,int> mp;
    for(int i = 0; i<s.size(); i++)
    {
        mp[s[i]]++;
        if(mp[s[i]] == 1) cnt++;
        ans[i] = cnt;
    }
    int res = 0;
    for(int i = 0; i<n; i++) res += ans[i];
    cout << res << "\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}