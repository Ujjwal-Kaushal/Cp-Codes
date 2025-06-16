#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int flag = 0,ans = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
           if(v[i] != v[j])
           {
                int temp = abs(v[i] - v[j]);
                ans = i;
                if(temp % k != 0)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
           }
           
        }
        // cout << flag << " ";
        if(flag == 1)
        {
            cout << "YES" << endl;
            cout << ans + 1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
   
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}