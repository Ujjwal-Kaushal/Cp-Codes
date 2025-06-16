#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1(n);
    for(int i = 0; i<n; i++) cin >> v1[i];

    vector<ll> v2(n);
    for(int i = 0; i<n; i++) cin >> v2[i];

    int tlen = 2*n;
    vector<ll> v3(tlen);
    for(int i = 0; i<n; i++)
    {
        v3[i] = v1[i];
    }
    ll j = 0;
    for(int i = n; i<tlen; i++)
    {
        v3[i] = v2[j];
        j++;
    }
    // sort(v3.begin(),v3.end());
    ll cnt = 1,ans = 0;
    for(int i = 0; i<tlen-1; i++)
    {
        if(v3[i] == v3[i+1])
        {
            cnt += 1;
        }
        ans = max(ans,cnt);
        if(v3[i] != v3[i+1])
        {
            cnt = 1;
            ans = max(ans,cnt);
        }    
    }
    cout << ans << "\n";
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