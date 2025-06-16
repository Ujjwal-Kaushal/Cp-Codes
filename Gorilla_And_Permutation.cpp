#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(v) sort(v.begin(),v.end())

void solve()
{
    ll n,m,k;
    cin >> n >> m >> k;

    for(int i = n; i>=1; i--)
    {
        if(i <= m)
        {
            cout << (m+1-i) << " ";
            continue;
        }
        if(i > m)
        {
            cout << i << " ";
            continue;
        }
    }
    return;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}