#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
void solve()
{
    int n;
    cin >> n;
     
    vi v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    
    if(v[n-2] > v[n-1])
    {
        cout << -1 << endl;
    }
    else
    {
        if(v[n-1] < 0)
        {
            if(is_sorted(v.begin(),v.end()))
            {
                cout << 0 << endl;
            }
            else  
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << n-2 << endl;
            for(int i = 1; i<=n-2; i++)
            {
                cout << i << ' ' << n-1 << ' ' << n << endl;
            }
        }
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}