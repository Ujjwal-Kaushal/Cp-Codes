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
        
        int a[n][n];
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> v;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(a[i][j] = 1) cnt++;

            }
            v.push_back(cnt);
            cnt = 0;
        }
        if(v.size() == 1)
        {
            cout << "TRIANGLE" << "\n";
            continue;
        }
        int diff = 2,flag = 0;
        for(int i = 0; i<v.size()-1; i++)
        {
            int temp = v[i] - v[i+1];
            if(temp != diff)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "TRIANGLE" << "\n";
        }
        else
        {
            cout << "SQUARE" << "\n";
        }

        
        
    }
}