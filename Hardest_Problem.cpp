#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M = 1e9 + 7;
const ll N = 1e5 + 1;
 
void solve()
{
    // main code 
    ll n = 1;
    cin >> n;
    vector <ll> arr(n);
    for(int i = 0 ; i < n ; i++)
    {
       cin >> arr[i]; 
    }
 
    vector <ll> vis(n + 1 , 0);
    ll cnt = 1;
    // cout << vis[3] << " ";
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            cout << arr[i] << " ";
            vis[arr[i]] = 1;
        }
        else
        {
            if(vis[arr[i]] == 0)
            {
                cout << arr[i] << " ";
                vis[arr[i]] = 1;
            }
            else
            {
                while(vis[cnt] != 0)
                {
                    cnt++;
                }
                vis[cnt] = 1;
                cout << cnt << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t = 1;
   cin >> t;
   while(t--)
   {
      solve();
   }
   return 0;
}