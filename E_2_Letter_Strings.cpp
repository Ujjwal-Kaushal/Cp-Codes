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

bool helper(string a, string b)
{
    if(a[0] != b[0] && a[1] != b[1]) return false;
    if(a == b) return false;
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for(auto& i : v)
    {
        cin >> i;
    }

    map<string,int> mp;

    for(auto& i : v)
    {
        mp[i]++;
    }

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        mp[v[i]]--;
        for(char c = 'a'; c <= 'k'; c++)
        {
            for(char d = 'a'; d <= 'k'; d++)
            {
                string temp;
                temp += c;
                temp += d;
                if(helper(temp,v[i])) ans += mp[temp];
            }
        }
    }
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