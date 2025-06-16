#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    if(n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    if(n == 2)
    {
        cout << v[0] - v[1] << endl;
        return;
    }
    else
    {
        int sum1 = 0,sum2 = 0;
        for(int i = 0 ; i<n; i++)
        {
            if(i % 2 == 0)
            {
                sum1 += v[i];
            }
            else
            {
                sum2 += v[i];
            }
        }
        cout << sum1 - sum2 << endl;
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