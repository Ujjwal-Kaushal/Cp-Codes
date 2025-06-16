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
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    int sz = 2*n;
    vector<int> ans(sz+1,-1);
    vector<vector<int>> arr(n+1,vector<int>(n+1));
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cin >> arr[i][j];
            int temp = i+j;
            if(ans[temp] != -1)
            {
                continue;
            }
            else
            {
                ans[temp] = arr[i][j];
            }
        }
    }

    vector<bool> vis(sz+1,false);
    for(int i = 2; i<=sz; i++)
    {
        if(!vis[ans[i]]) vis[ans[i]] = true;
    }
    int f = 0,idx = 0;
    for(int i = 2; i<=sz; i++)
    {
        if(!vis[i])
        {
            f = 1;
            idx = i;
            break;
        }
    }
    if(!f)
    {
        ans[1] = 1;
    }
    else ans[1] = idx;

    for(int i = 1; i<=sz; i++) cout << ans[i] << " ";
    cout << "\n";
}
int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--) solve();
}