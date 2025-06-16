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
    ll n = 1;
    cin >> n;
    
    ll ans = (n / 15)*3;
    ll t = n % 15;
    t++;
    if(t > 3)
        t = 3;
    ans += t;
    cout << ans << endl;
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