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
    // vector<int> left;
    // vector<int> right;
    for(int i = 0; i<n; i++) cin >> v[i];

    int slessthan4 = 0,smorethan4 = 0;
    int num = v[n-1];
    for(int i = 0; i<n-1; i++)
    {
        if(v[i] < num)
        {
            int diff = num - v[i];
            slessthan4 += diff;
 
        }
        else
        {
            int add = v[i] - num;
            smorethan4 += add;
   
        }
    }
    // cout << slessthan4 << " " << smorethan4 << "\n";
    if(smorethan4 == slessthan4)
    {
        int start = 0, end = n - 1,flag = 0;
        int idx = 0;
        for(int i = 0; i<n-1; i++)
        {
            if(v[i] < num)
            {
                idx = i;
                break;
            }
        }
        for(int i = idx; i<n-1; i++)
        {
            if(v[i] > num)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    }
}