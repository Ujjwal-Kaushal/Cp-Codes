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

    sort(v.begin(),v.end());

    if(n == 1)
    { 
        cout << v[0] << endl;
    }
    else
    {
        for(int i = 0; i<n-1; i++)
        {
            int temp = v[i] + v[i+1] - 1;
            v[i+1] = temp;
        }
        cout << v[n-1] << endl;
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