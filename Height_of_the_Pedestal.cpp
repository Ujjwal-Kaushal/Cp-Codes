#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a = 0,b = 0,c = 0;
    a = (n/2);
    b = a-1;
    c = n - (a+b);
    if(b != c)
    {
        cout << a << " " << b << " " << c << "\n";
    }
    else
    {
        a = (n/2)+1;
        b = a-1;
        c = n - (a+b);
        cout << a << " " << b << " " << c << "\n";
    }
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