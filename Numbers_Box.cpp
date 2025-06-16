#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,m;
    cin >> n >> m;
    int a[n][m];
    int minus = 0,zero = 0;
    vector<int> ans;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] < 0)
            {
                minus++;
                ans.push_back(a[i][j]);
            }
            if(a[i][j] == 0)   zero++;
        }
    }
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            sum += abs(a[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    //for(int i = 0; i<ans.size(); i++) cout << ans[i] << " "; 
    //cout << minus << " ";
    if(minus % 2 == 0)
    {
        cout << sum << endl;
    }    
    else if(minus % 2 != 0 && zero % 2 != 0)
    {
        cout << sum  << endl;
    }
    else if(minus % 2 != 0 || zero % 2 == 0)
    else
    {
        cout << sum + ans[0] << endl;
    }

}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}