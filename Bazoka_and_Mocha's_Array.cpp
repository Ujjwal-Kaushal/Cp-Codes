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
        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
        }
        bool istrue = true;
        for(int i = 0; i<n-1; i++)
        {
            if(v[i] > v[i+1])
            {
                istrue = false;
            }
        }
        if(istrue)
        {
            cout << "YES" << endl;
        }
        int idx = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i+1] < v[i])
            {
                idx = i;
                break;
            }
        }
        int check = 1;
        for(int i = idx; i<n; i++)
        {
            if(v[i] > v[i+1])
            {
                check = 0;
                break;
            }
        }
        if(check == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}