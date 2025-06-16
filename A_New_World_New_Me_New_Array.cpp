#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    ll n,k,p;
    cin >> n >> k >> p;
    k = abs(k);

    ll ans = k / p;
    if(k % p)
    {
        ans++;
    }
    if(ans <= n)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}