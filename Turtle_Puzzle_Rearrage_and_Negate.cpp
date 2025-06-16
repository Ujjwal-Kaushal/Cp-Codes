#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] < 0)
        {
            v[i] *= -1;
            sum += v[i];
        }
        else
        {
            sum += v[i];
        }
    }
    cout << sum << "\n";
    
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