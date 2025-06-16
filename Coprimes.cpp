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
#include<numeric>
int gcdfinder(int a, int b)
{
    int ans = std::__gcd(a,b);
    cout << ans << "\n";
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++)
            cin >> a[i];

        int ans = 0,fans = 0;
        int end = n-1;
        for(int i = 0; i<n; i++)
        {
            int coprime = gcdfinder(a[i],a[end]);
            if(coprime == 1)
            {   
                fans = i+1+end+1;
                cout << fans << " ";
                ans = max(ans,fans);
                cout << " " << ans << " "; 
            }
            end--;
        }
        cout << fans << "\n";
    }
}