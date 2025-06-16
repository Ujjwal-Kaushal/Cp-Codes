#include<bits/stdc++.h>
using namespace std;
void solvE()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int flag = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
        continue;
        else
        {
            flag = 1;
            break;
        }
        if(flag == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
int main()
{
    // int t;
    // cin >> t;

    // while(t--)
    // {
        solvE();
// }
}