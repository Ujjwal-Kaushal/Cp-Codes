#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int hash[27];
    int a = 97;
    for(int i = 0; i<=26; i++)
    {
        if(i == 0)
        continue;

        hash[0] = (char)(a);
        a++;
    }
    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        sort(str.begin(),str.end());

        for(int i = 0; i<=26; i++)
        {
            if(i == 0)
            continue;
            
            if(hash[i] == str[n-1])
            {
                cout << i;
                break;
            }
        }
    }
}