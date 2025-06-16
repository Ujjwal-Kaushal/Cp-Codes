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
    char a[8][8];
    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            cin >> a[i][j];
        }

    }
    vector<char> v;
    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            if(a[i][j] == '.')
            {
                continue;
            }
            else
            {
                v.pb(a[i][j]);
            }
        }
    }
    f_loop
    {
        cout << v[i];
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    solve();

    return 0;
}