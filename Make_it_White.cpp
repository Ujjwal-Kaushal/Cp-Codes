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
    auto it = find(vi,ve,num); */

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    vector<int> v;

    for(int i = 0; i<n; i++)
    {
        if(str[i] == 'B')
        v.pb(i+1);
    }

    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    
    // cout << "\n";

    if(v.size() == 1)
    cout << 1 << "\n";
    else
    {   
        int n = v.size();
        sort(v.begin(),v.end());   
        cout << (v[n-1] - v[0]) + 1 << "\n";
        
    }

    
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    solve();

    return 0;
}