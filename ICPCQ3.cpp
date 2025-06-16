#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n,0);
        for(int i = 0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        vector<ll> sum(n,0);
        sum[0] = v[0];
        for(int i = 1; i<n; i++)
        {
            sum[i] = sum[i-1] + v[i];
        }
        vector<ll> ans(n,0);
        for(int i = 0; i<n; i++)
        {
            if(i < k)
            {
                ans[i] = sum[i];
            }
            else if(i == k)
            {
                ans[i] = sum[i] - sum[0];
            }
            else
            {
                ans[i] = ans[i-k-1] + sum[i] - sum[i-k];
            }
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}