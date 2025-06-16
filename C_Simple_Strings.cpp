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
    string s;
    cin >> s;

    map<char,int> mp;
    int len = 1;
    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            len++;
        }
        else
        {
            mp[s[i]] = len;
            len = 1;
        }
    }
    int ans = 0;
    for(auto i : mp)
    {
        if(i.second > 1)
        {
            if(i.second % 2 == 0)
            {
                ans = ans + (ceil((1.0*i.second)/2));

            }
            else
            {
                ans = ans + i.second/2;
            }
        }
    }
    
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