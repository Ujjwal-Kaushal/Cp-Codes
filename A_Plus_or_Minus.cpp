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
    int a,b,c;
    cin >> a >> b >> c;

    if(a + b == c) cout  << '+' << "\n";
    else cout << '-' << "\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();


    return 0;
}