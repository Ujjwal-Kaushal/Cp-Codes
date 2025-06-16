#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    // while(n--)
    // {
    //     int temp1 = n / 4;
    //     if(temp1 == 0)
    //     {
    //         cout << 1 << endl;
    //         break;
    //     }
    //     else
    //     {

    //     }
    // }

    int temp1 = n / 4;
    int rem1 = n % 4;
    int temp2 = n / 2;
    // int rem2 = n%2;
    if(rem1 == 0)
    {
        cout << temp1 << endl;
        
    }
    // cout << temp1+temp2 << endl;
    else
    {
        cout << temp1+1 << endl;
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
    
    return 0;
}