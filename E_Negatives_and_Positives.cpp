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
    ll n = 1;
    cin >> n;
    vll v(n);
    ll nn = 0,ans = 0,temp = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        temp += abs(v[i]);
        if(v[i] < 0) nn++;
    }
    if(n % 2 == 0)
    {
        for(int i = 0; i<n; i++)
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
    else
    {
        sort(all);
        ll minus = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i] < 0)
            {
                minus = v[i];
                break;
            }
        }
        cout << temp - 2 * minus << endl;
    }
}
int main()
{
    ll t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }

}