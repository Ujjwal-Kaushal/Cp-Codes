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

    vector<pair<char,int>> vp;
    int a = 97;
    for(int i = 0; i<26; i++)
    {
        char c = (char)a;
        int num = -1;
        vp.push_back({c,num});
        ++a;
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<26; j++)
        {
            if(v[i] == vp[j].second + 1)
            {
                cout << vp[j].first;
                ++vp[j].second;
                break;
            }
        }
    }
    cout << "\n";
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