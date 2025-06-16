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

        string s;
        cin >> s;
        int len = s.size();

        vector<char> v(len);
        for(int i = 0; i<len; i++)
        {
            v.push_back(s[i]);
        }

        int idx = 0;
        for(int i = 0; i<len-1; i++)
        {
            if(v[i] == '*' && v[i+1] == '*')
            {
                idx = i;
                break;
            }
        }

        int ans = 0;
        for(int i = 0; i<idx; i++)
        {
            if(v[i] == '@')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}