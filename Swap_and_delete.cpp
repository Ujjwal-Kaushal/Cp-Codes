#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;

    ll ones = 0, zero = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '1') ones++;
        else zero++;

    }

    if(s.size() % 2 != 0)
    {
        ll ans = 0;
        for(int i = 0; i<s.size(); i++)
    }


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