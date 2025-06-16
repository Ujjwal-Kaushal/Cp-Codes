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

    int n = s.size();

    int o = count(s.begin(),s.end(),'1');
    int z = count(s.begin(),s.end(),'0');
    int t = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '0' && o > 0)
        {
            o--;
            t++;
        }
        else if(s[i] == '1' && z > 0)
        {
            z--;
            t++;
        }
        else break;
    }
    cout << n - t << "\n";
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