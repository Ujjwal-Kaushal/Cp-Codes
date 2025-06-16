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
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int ones = 0, zeros = 0;
    ones = count(s.begin(),s.end(),'1');
    zeros = n - ones;

    int x = max(ones,zeros) - n/2;
    int y = ones/2 + zeros/2;
    if(k >= x && k <= y && (k - y) % 2 == 0) cout << "YES\n";
    else cout << "NO\n";

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}