#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    ll n,x;
    cin >> n >> x;

    ll ans = 0,temp = 0;
    for(int i = 0; i<n; i++)
    {
        ll a;
        cin >> a;
        ans = max(ans,a-temp);
        temp = a;
    }
    cout << max(ans,2*(x-temp)) << endl;

}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}