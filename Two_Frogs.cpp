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
    int n = 1,a = 1,b = 1;
    cin >> n >> a >> b;
    if(abs(a - b) % 2) cout << "NO" << endl;
    else cout << "YES" << endl;
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