#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int l,r;
    cin >> l >> r;

    vector<int> v;
    int f = 0;
    // if(l == 1)
    // {
    //     v.push_back(1);
    // }
    for(int i = l; i<=r; i++)
    {
        for(int j = 2; j<i; j++)
        {
            if(i % j != 0)
            {
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }
        }
        if(f == 1)
        {
            v.push_back(i);
            f = 0;
        }

    }
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";

    if((v.size())%2 == 0)
    {
        cout << (v.size())+2 << endl;
    }
    else
    {
        cout << (v.size())+1 << endl;
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