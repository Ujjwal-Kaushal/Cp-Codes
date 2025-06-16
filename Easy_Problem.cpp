#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i+j == n)ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while(t--) solve();
}