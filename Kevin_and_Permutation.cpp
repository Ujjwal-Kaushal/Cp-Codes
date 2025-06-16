#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    ll n = 1, k = 1;
    cin >> n >> k;
    vll ans(n,0);
    ll cnt = 0, j = 1;
    for(int i = 0; i<n; i++)
    {
        cnt++;
        if(cnt == k)
        {
            ans[i] = j;
            j++;
            cnt = 0;
        }
    }

    ll left = n/k;
    ll count = 0;
    for(int i = 0; i<n; i++)
    {
        if(ans[i] == 0)
        {
            ans[i] = count + left + 1;
            count++;
        }
        else continue;
    }
    for(int i = 0; i<n; i++)
    {
        cout << ans[i] << " ";  
    }
    cout << endl;
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--) solve();
}