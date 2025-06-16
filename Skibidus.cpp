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
    string w;
    cin >> w;

    if(w.size() == 2)
    {
        cout << "i" << endl;
    }
    else
    {
        int n = w.size();
        w.erase(n-2,1);
        w.erase(n-2,1);
        w = w + "i";
        cout << w << endl;
    }
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