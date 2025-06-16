#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll l,r;
    cin >> l >> r;
    vector<ll> v;
    if(r == l)
    {
        cout << 1 << endl;
        return;
    }
    if(r == l+1)
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        ll ans = 0;
        ll temp = l;
        int j = 1;
        while(temp <= r)
        {
            temp += j;
            v.push_back(temp);
            ans++;
            j++;
        }
        cout << ans << endl;
        return;

    }

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