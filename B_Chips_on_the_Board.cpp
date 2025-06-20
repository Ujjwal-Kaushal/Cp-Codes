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

    vi a(n), b(n);
    int mn1 = INT_MAX, mn2 = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < mn1) mn1 = a[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> b[i];
        if(b[i] < mn2) mn2 = b[i];
    }
    
    int a1 = 0, a2 = 0;
    for(int i = 0; i<n; i++)
    {
        a1 = a1 + (a[i] + mn2);
        a2 = a2 + (b[i] + mn1);
    }
    cout << min(a1,a2) << "\n";
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