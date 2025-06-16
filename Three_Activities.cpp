#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vll vector<long long>
void solve()
{
    ll n;
    cin >> n;

    vll v1(n),v2(n),v3(n);

    for(int i = 0; i<n; i++) cin >> v1[i];
    for(int i = 0; i<n; i++) cin >> v2[i];
    for(int i = 0; i<n; i++) cin >> v3[i];

    vector<pair<ll,ll>> d1,d2,d3;
    for(int i = 0; i<n; i++)
    {
        d1.push_back({v1[i],i});
    }
    for(int i = 0; i<n; i++)
    {
        d2.push_back({v2[i],i});
    }
    for(int i = 0; i<n; i++)
    {
        d3.push_back({v3[i],i});
    }
    int size = n - 3;
    sort(d1.begin(),d1.end());
    sort(d2.begin(),d2.end());
    sort(d3.begin(),d3.end());
    ll ans = 0;
    for(int i = size; i<d1.size(); i++)
    {
        for(int j = size; j<d2.size(); j++)
        {
            for(int k = size; k<d3.size(); k++)
            {
                if(d1[i].second != d2[j].second && d2[j].second != d3[k].second && d3[k].second != d1[i].second)
                {
                    ans = max(ans,d1[i].first + d2[j].first + d3[k].first);
                } 
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ll tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
}