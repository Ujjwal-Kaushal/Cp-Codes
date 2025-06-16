#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 1,bonus = 1;

    sort(s.begin(),s.end());
    for(int i = 1; i<n; i++)
    {
        if(s[i] == s[i-1])
        {
            ans += 1;
            
        }
        else
        {
            bonus += 1;
            ans += 1;
        }
    }
    cout << ans + bonus << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}