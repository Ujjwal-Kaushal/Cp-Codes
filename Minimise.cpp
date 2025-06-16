#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;

    int c = (a+b)/2;
    cout << (c-a)+(b-c) << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}