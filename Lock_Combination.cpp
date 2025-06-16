#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long>


void solve()
{
    ll x = 1;
    cin >> x;

    if(x % 33 == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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