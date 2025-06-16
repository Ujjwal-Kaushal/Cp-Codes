#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll x = 0, i = 1;
    while(x <= n && x >= -n)
    {
        if(i % 2 != 0)
        {
            x -= 2*i-1;
        }
        else
        {
            x += 2*i-1;
        }
        i++;
    }
    if(i % 2 == 0)
    {
        cout << "Sakurako" << "\n";
    }
    else
    {
        cout << "Kosuke" << "\n";
    }
}
int main()
{   
    ll t;
    cin >> t;
    while(t--) { solve(); }
}