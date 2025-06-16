#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    //main code
    ll n,k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int prod = 1;
    for(int i = 0; i<n; i++)
    {
        prod *= v[i];
    }
    int ans = 0;
    if(prod % k == 0)
    {
        cout << ans << endl;
    }
    else
    {
        for(int i = 1; i<1000000; i++)
        {
            prod++;
            if(prod % k == 0)
            {
                break;
            }
        }
        int fans = 1e9;
        for(int i = 0; i<n; i++)
        {
            prod = prod / v[i];
            for(int j = 1; j<10000000; j++)
            {
                v[i] += j;
                ans++;
                prod = prod * v[j];
                if(prod % k == 0)
                    break;
            }
            fans = min(fans,ans);
        }
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