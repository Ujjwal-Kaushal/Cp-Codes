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
        int ans = 0;
        vector<int> v(26);
        vector<int> V(26,0);
        char a = 'A';
        for(int i = 0; i < 26; i++)
        {
            v[i] = (int)a;
            a++;
        }
        for(int i = 0; i<s.size(); i++)
        {
            for(int j = 0; j<26; j++)
            {
                if(s[i] == (char)v[j])
                {
                    V[j]++;
                }
            }
        }
        for(int i = 0; i<26; i++)
        {
            if(V[i] > i)
            {
                // cout << (char)v[i];
                ans++;
            }
        }

        cout << ans << endl;
    }
}