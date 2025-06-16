#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll m,a,b,c;
        cin >> m >> a >> b >> c;
        ll ans = 0;
        ll total = 2*m;
        ans += min(m,a);
        ans += min(m,b);

        total -= ans;
        ans += min(total,c);
        cout << ans << endl;
    }
}