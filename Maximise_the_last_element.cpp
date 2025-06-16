#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        vector<int> V;
        for(int i = 0; i<n; i++)
        {
            if(i % 2 == 0)
            {
                V.push_back(v[i]);
            }
        }
        
        sort(V.begin(),V.end());
        // for(int i = 0; i<V.size(); i++)
        // {
        //     cout << V[i] << " ";
        // }
        int len = V.size();
        cout << V[len-1] << endl;
    }
}