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
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);

        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
        }

        ll y = 0,temp = 0,check = 0;
        sort(vi,ve);

        reverse(vi,ve);

        for(int i = 0; i<n; i++)
        {
            if(v[i] < y)
            {
                temp = i;
                check = 1;
                break;
            }
            if(v[i] >= y)
            {
                y = v[i];
            }
        }
        int len = n-1;
        //cout << check << "\n";
        if(check = 1 && temp % 2 != 0)
        {
            cout << "YES" << "\n";
        }
        else if(check = 1 && temp % 2 == 0)
        {
            cout << "NO" << "\n";
        }
        else if(check = 0 && len % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        

        
    }
}