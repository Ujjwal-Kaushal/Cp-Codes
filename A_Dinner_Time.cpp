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

void solve()
{
    int n,m,p,q;
    cin >> n >> m >> p >> q;

    int div = n/p, rem = n%p;
    if(!rem)
    {
        if(q*div == m) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "YES\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}