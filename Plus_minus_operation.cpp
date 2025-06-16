#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

ll rs(ll a, ll b)
{
    if(a > b) return 0;
    return ((a+b)*(b-a+1))/2;
}
void solve()
{
    ll n = 1, x = 1, y = 1;
    cin >> n >> x >> y;


    ll common = (x*y)/__gcd(x,y);
    ll start = n/x - n/common;
    ll end = n/y - n/common; 

    cout << rs(n - start + 1,n) - rs(1,end) << endl;
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
