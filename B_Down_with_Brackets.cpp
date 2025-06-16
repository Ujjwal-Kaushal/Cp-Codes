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
    string s;
    cin >> s;
    
    int cnt = 0;
    for(int i = 1; i<s.size()-1; i++)
    {
        if(s[i] == '(') cnt++;
        else cnt--;
        if(cnt < 0)
        {
            cout << "YES\n";
            return;
        }
    }
    if(!cnt) cout << "NO\n";
    else cout << "YES\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}