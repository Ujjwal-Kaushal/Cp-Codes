#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<int> v(n);

    for(int i = 0; i<n; i++) cin >> v[i];

    vector<pair<int,int>> V;
    for(int i = 0; i<n; i++)
    {
        pair<int,int> p = {i+1,v[i]};
        V.push_back(p);
    }
    int flag = 0;
    if(n == 2)
    {
        // if(V[1].first == V[0].second && V[1].second == V[0].first)
        // {
        //     cout << 2 << endl;
        //     return;
        // }
        cout << 2 << endl;
        return;
    }

    sort(V.begin(),V.end());
    // for(int i = 0; i<V.size(); i++)
    // {
    //     cout << V[i].first << " " << V[i].second << "\n";
    // }
    for(int i = 0; i<V.size(); i++)
    {
        for(int j = i+1; j<V.size(); j++)
        {
            if(V[i].first == V[j].second && V[i].second == V[j].first)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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