#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char s[3];
        cin >> s[0] >> s[1] >> s[2];
        int num = s[0]-'0';
        int nm = s[2]-'0';
        cout << num + nm << "\n";

    }
}