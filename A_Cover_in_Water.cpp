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
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(s.find("...") != string::npos)
    {
        cout << 2 << "\n";
    }
    else
    {
        int ans = 0;
        for(int i = 0; i<n; i++) ans += (s[i] == '.') ? 1 : 0;
        cout << ans << "\n";
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();


    return 0;
}