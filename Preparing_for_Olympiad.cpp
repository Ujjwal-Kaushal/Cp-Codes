#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    ll n = 1;
    cin >>  n;
    vll v1(n),v2(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> v2[i];
    }
    ll ans = 0;
    for(int i = 0; i<n-1; i++)
    {
        if(v1[i] > v2[i+1])
        {
            ans += v1[i] - v2[i+1];
        }
    }
    cout << ans + v1[n-1] << endl;
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--) solve();
}