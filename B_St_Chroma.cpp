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
    int n,x;
    cin >> n >> x;

    vector<int> ans(n);

    if(x == n)
    {
        for(int i = n-1; i>=0; i--)
        {
            ans[n-i-1] = i;
        }
        for(int i = 0; i<n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        ans[n-1] = x;
        for(int i = 0; i<n-1; i++)
        {
            if(i == x)
            {
                ans[i] = n-1;
            }
            else
            {
                ans[i] = i;
            }
        }
        for(int i = 0; i<n; i++) cout << ans[i] << " ";

        cout << "\n";
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}