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

    string s;
    cin >> s;

    int b = 0, r = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'R') r++;
        if(s[i] == 'B') b++;
        if(s[i] == 'W' || i == n-1)
        {
            if(r == 0 && b != 0 || b == 0 && r != 0)
            {
                cout << "NO\n";
                return;
            }
            r = 0;
            b = 0;
        }
    }
    cout << "YES\n";
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