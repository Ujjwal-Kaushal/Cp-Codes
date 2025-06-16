#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back


void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i<=57; i++)
    {
        ll k = 1LL << i;
        unordered_set<ll> mp;
        for(int j = 0; j<n; j++)
        {
            mp.insert(v[j] % k);
            if(mp.size() > 2) break;
        }
        if(mp.size() == 2)
        {
            cout << k << "\n";
            break;
        }
    }
    return;
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}