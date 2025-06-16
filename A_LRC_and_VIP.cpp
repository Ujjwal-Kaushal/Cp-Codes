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
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int mn = *min_element(v.begin(),v.end());
    int mx = *max_element(v.begin(),v.end());
    if(mn == mx)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for(int i = 0; i<n; i++)
        {
            cout << (1 + (v[i] == mx)) << " \n"[i+1 == n];
        }
    }
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}