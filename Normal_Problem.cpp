#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string temp = " ";
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'p')
            {
                temp.push_back('q');
            }
            else if(s[i] == 'q')
            {
                temp.push_back('p');
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        cout << temp << endl;
    }

}