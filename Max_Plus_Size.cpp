#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll res1 = 0,res2 = 0;

    for(int i = 0; i<n; i++) cin >> v[i];
    ll a[n];

    for(int i = 0; i<n; i++) a[i] = v[i];
    sort(v.begin(),v.end());

    ll fmax = v[n-1];
    ll smax = v[n-2];

    ll idx1 = 0,idx2 = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == fmax)
        {
            idx1 = i;
        }
        if(a[i] == smax)
        {
            idx2 = i;
        }

    }
    if(idx1 % 2 == 0 && idx2 % 2 != 0)
    {
        if(n % 2 == 0)
        {
            cout << max((fmax + (n/2)),(smax + (n/2))) << "\n";
            return;
        }
        else
        {
            cout << max((fmax + (n/2) + 1), smax + (n/2)) << "\n";
            return;
        }
    }
    if(idx1 % 2 != 0 && idx2 % 2 == 0)
    {
        
    }


}
int main()
{
    ll t;
    cin >> t;
    while(t--) solve();

    return 0;
}