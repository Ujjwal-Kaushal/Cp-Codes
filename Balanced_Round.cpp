#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    ll cnt = 1,ans = 1;
    for(int i = 1; i<n; i++)
    {
        if(v[i] - v[i-1] >  k)
        {
            cnt = 1;
        }
        else cnt++;
        ans = max(cnt,ans);
    }

    
    cout << n - ans << "\n";
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
