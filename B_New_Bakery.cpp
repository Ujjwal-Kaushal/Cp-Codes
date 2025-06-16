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
    int n,a,b;
    cin >> n >> a >> b;

    int k = b - a + 1;
    if(k <= 0)
    {
        cout << n * a << "\n";
    }
    else
    {
        k = min(k,n);
        cout << (k * (b + 1) - ((k*(k+1))/2)) + max(n - k,0LL) * a << "\n";
    }
}

int32_t main()
{
    fastIO
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}