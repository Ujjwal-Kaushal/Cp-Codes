#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string r = " ";
    sort(s.begin(),s.end());

    for(int i = 1; i<s.size(); i++)
    {
        if(s[i] == s[i-1]) continue;

        else
        {
            s.append(s[i]);
        }
    }

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}