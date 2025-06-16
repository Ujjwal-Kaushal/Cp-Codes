#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define sort(all) sort(v.begin(),v.end())
void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    sort(all);

    if(n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int cnt = 1,ans = 0;
        for(int i = 1; i<n; i++)
        {
            if(v[i] == v[i-1]) cnt++;
            ans = max(ans,cnt);
            if(v[i] != v[i-1])
            {
                // cout << ans << " ";
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
        cout << n - ans << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}