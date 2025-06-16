#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    
    vector<int> ans(n);
    if(n == 1)
    {
        cout << -1 << "\n";
        return;
    }
    else if(n == 2)
    {
        cout << -1 << " " << 1 << "\n";
        return;
    }
    else if(n == 3)
    {
        cout << 1 << " " << 2 << " " << -3 << "\n";
        return;
    }
    // n = 6
    // i goes from 0 to 2 i.e i = 0, i = 1, i = 2;
    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                cout << -1 << " ";
            }
            else cout << 1 << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 0; i<n-3; i++)
    {
        if(i % 2 == 0) ans[i] =-1;
        else ans[i] = 1;
    }
    ans[n-3] = 1;
    ans[n-2] = 2;
    ans[n-1] = -3;
    int s = 0;
    for(int i = 0; i<n; i++)
    {
        s += ans[i];
    }
    if(!s)
    {
        for(int i = 0; i<n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
    
}
int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
    return 0;
}
