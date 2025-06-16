#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> v1(n);
        vector<int> v2(m);

        for(int i = 0; i<n; i++)
        {
            cin >> v1[i];   
        }
        for(int j = 0; j<m; j++)
        {
            cin >> v2[j];
        }

        int cnt = 0;
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(v1[i] + v2[j] <= k) cnt++;
            }
        }
        cout << cnt << "\n";
    }
}