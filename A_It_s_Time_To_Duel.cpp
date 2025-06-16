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
#define MOD 1e9 + 7

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    int ones = 0,zeros = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] == 1) ones++;

    }
    zeros = n - ones;
    if(ones == n || zeros == n)
    {
        cout << "YES\n";
    }
    else
    {
        //if(v[0] == 1)
        //{
            for(int i = 0; i<n-1; i++)
            {
                if(v[i] == 0 && v[i+1] == 0)
                {
                    cout << "YES\n";
                    return;
                }
                // cout << "NO\n";
            }
            cout << "NO\n";
        //}
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}