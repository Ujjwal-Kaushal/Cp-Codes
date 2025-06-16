#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int flag = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] < 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        if(n == 2)
        cout << -2 << endl;

        else
        {
            cout << -2+(n-2) << endl;
        }
    }
    else
    {
        for(int j = 0; j<n-1; j++)
        {
            if(v[j] == -1 && v[j+1] == -1)
            {
                v[j] = 1;
                v[j+1] = 1;
                break;
            }
        }
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            sum += v[i];
        }
        cout << sum << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    //vector<int> v;
    
    while(t--)
    {
        solve();
    }
}