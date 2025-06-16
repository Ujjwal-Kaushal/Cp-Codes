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
    int a,b,n;
    cin >> a >> b >> n;

    vi v(n);

    for(int i = 0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i : v)
    {
        ans += min(a-1,i);
    }
    cout << ans+b << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

/*
    a = 2 , b = 2 , n = 5

    2 2 4 5 5
    

    1+2+2+
    
    a = 1, b = 1, n = 5

    1 4 6 6 6

*/