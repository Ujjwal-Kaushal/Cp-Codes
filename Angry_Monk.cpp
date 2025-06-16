#include<bits/stdc++.h>

//#include "macros.h"
// Shortcuts
#define ll long long
#define lli long long int
#define pb push_back
#define po pop_out
#define vi v.begin()
#define ve v.end()
#define yes cout << yes << "\n"
#define no cout << no << "\n"
#define cotu cout
#define cont continue
#define rev reverse(vi,ve);
#define f_loop for(int i = 0; i<v.size(); i++)
#define w_loop while(start <= end)
// Inbuilt algo's

 /* ll min = *min_element(vi,ve);
    ll max = *max_element(vi,ve);
    ll sum = accumulate(vi,ve,0);
    ll cnt = count(vi,ve,num);
    auto it = find(vi,ve,num);
*/
using namespace std;

void solve()
{
    // main code
    ll n = 1;
    ll k = 1;
    cin >> n >> k;
    vector<ll> arr(k);
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr.begin(),arr.end());
    ll sum = 0; ll ones = 0;
    ll num = 0;
 
    for (int i = (k - 2); i >= 0; i--)
    {
        if (arr[i] >= 2)
        {
            sum += (arr[i] - 1);
        }
        num += arr[i];
    }
 
    
    cout << sum + num << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}