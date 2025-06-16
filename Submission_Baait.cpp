#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    int check = 0;
    for(int i = 1; i<n; i++)
    {
        if(v[i] != v[0])
        {
            check = 1;
            break;
        }
    }
    if(check == 0 && n % 2 == 0)
    {
        cout << "NO\n";
    }
    else if(check == 0 && n % 2 != 0)
    {
        cout << "YES\n";
    }
    else
    {
        int idx = 0;
        for(int i = 1; i<n; i++)
        {
            if(v[i] != v[i-1])
            {
                idx = i+1;
                break;
            }
        }
        if(idx % 2 == 0)
        {
            cout << "YES\n";
        }
        else if(idx % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
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