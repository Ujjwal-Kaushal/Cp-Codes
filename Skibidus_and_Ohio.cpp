#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << s.size() << endl;
    
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}