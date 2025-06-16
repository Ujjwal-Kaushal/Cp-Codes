#include<bits/stdc++.h>
using namespace std;


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
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;

    int s1 = a+b;
    int s2 = b+c;
    int s3 = a+c;

    if(s1 >= 10)
    {
        cout << "YES" << "\n";
        return;
    }
    if(s2  >= 10)
    {
        cout << "YES" << "\n";
        return;
    }
    if(s3 >= 10)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
    return;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}