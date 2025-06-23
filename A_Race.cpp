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
    int a,x,y;
    cin >> a >> x >> y;
    
    
    for (int b = 1; b <= 100; ++b) 
    {
        if (b == a) continue;
        int dbx = abs(b - x);
        int dby = abs(b - y);
        int dax = abs(a - x);
        int day = abs(a - y);
        if (dbx < dax && dby < day)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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