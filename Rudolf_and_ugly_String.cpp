#include<bits/stdc++.h>
using namespace std;

void solve()

{
    int n;
    cin >> n;

    vector<char> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    char a = 'm',b = 'a', c = 'p';
    char x = 'p', y = 'i', z = 'e';
    for(int i = 0; i<n-2; i++)
    {
        if(v[i] == a && v[i+1] == b && v[i+2] == c)
        {
            cout << "YES" << "\n";
            return;
        }
        if(v[i] == x && v[i] == y && v[i] == z)
        {
            cout << "YES" << "\n";
            return;
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
}