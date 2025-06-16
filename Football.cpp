#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a[3];
    for(int i = 0; i<3; i++)
        cin >> a[i];

    int i = 5;
    while(i >= 1)
    {
        sort(a,a+3);
        a[0]++;
        i--;
    }
    cout << a[0]*a[1]*a[2] << "\n";
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