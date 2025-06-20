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

void solve(map<int, int>& mp)
{
    string s;
    cin >> s;
    
    int a = 0, c = 1, b = 1;
    for(int i = 1; i<s.size(); i++)
    {
        if(s[i] == s[i-1]) ++c;
        else
        {
            a = a + c - 1;
            b = (b * c) % mod;
            c = 1;
        }
    }
    a = a + c - 1;
    b = (b * c) % mod;
    b = (b * mp[a]) % mod;
    cout << a << ' ' << b << "\n";
        
}
int32_t main()
{
    int t;
    cin >> t;
    map<int,int> mp;
    mp[0] = 1;
    int n = 1;
    for(int i = 1; i<=200000; i++)
    {
        n = (n * i) % mod;
        mp[i] = n;
    }
    while(t--) solve(mp);

    return 0;
}