#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    
    ll k = n-1;
    ll smult = 1, emult = 1,check = 0;
    for(int i = 1; i <= k; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j < i)
            {
                smult *= v[j];
            }
            else
            {
                emult *= v[j];
            }
        }
        if(smult == emult)
        {
            // cout << smult << " " << emult << "\n";
            check = 1;
            cout << i << "\n";
            break;
        }
        else
        {
            smult = 1;
            emult = 1;
        }
    }
    if(check != 1) cout << -1 << "\n";
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