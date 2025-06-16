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
    int n,m;
    cin >> n >> m;
    vi v;
    int ans = 0;

    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;

        ans = ans + s.size();
        int cnt = 0;
        while(s.back() == '0')
        {
            s.pop_back();
            cnt++;
        }
        v.pb(cnt);
    }
    sort(v.rbegin(),v.rend());
    for(int i = 0; i<v.size(); i += 2)
    {
        ans -= v[i];
    }
    cout << (ans > m ? "Sasha\n" : "Anna\n");

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