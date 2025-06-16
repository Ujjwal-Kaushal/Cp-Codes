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
        vector<int> v;
        int len = to_string(n).size();
        string s = to_string(n);
        int k = 0;
        if(s[0] == '1' && s[1] == '0')
        {
            if(len <= 3)
            {
                if(s[2] >= '2')
                cout << "YES" << endl;
                
                else
                cout << "NO" << endl;
            }
            
            else if(len >= 4)
            {
                if(s[2] >= '1')
                {
                    cout << "YES" << endl;
                }
                else
                cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }

        else
        cout << "NO" << endl;

    }
}