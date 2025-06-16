#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;

    char a;
    cin >> a;

    vector<int> v;
    for(int i = 0; i<s.size(); i++)
    {
        if(v[i] == a)
        {
            v.push_back(i);
        }
    }
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i]%2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}