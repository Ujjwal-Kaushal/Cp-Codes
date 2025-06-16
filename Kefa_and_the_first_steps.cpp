#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // ll t;
    // cin >> t;
    // while(t--)
    // {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        int ans = 0, cnt = 1, flag = 0;
        if(n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for(int i = 1; i<n; i++)
        {
            if(v[i] >= v[i-1])
            {
                cnt++;
                // ans = max(ans,cnt);
            }
            // ans = max(ans,cnt);
            else
            {
                ans = max(ans,cnt);
                // cout << ans << " ";
                cnt = 1;
            }
            ans = max(ans,cnt);
        }
        cout << ans << endl;
        }
 //   }
}