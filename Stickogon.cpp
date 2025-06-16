#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<int> v(101,0);
    for(int i = 0; i<n; i++)
    {
        ll temp;
        cin >> temp;
        v[temp]++;
    }
    ll sum = 0;
    for(auto& s : v)
    {
        sum += s/3;
    }
    cout << sum << endl;
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