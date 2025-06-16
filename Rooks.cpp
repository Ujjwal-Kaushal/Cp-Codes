#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        for(int i = 1; i<=8; i++)
        {
            if(s[1] == i)
            continue;

            else cout << s[0] << i << "\n";
        }
        for(char a = 'a'; a < 'h'; a++)
        {
            if(s[0] == a) continue;
            else cout << s[a] << s[1] << "\n";
        }
    }
}