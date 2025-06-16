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
    lli n = 1;
    cin >> n;

    lli ans = 0;
    if(n <= 3)
    {
        cout << 1 << "\n";
        return;
    }
    while(n > 3)
    {
        n = n/4;
        ans++;
    }
    lli res = 1ll << ans;
    cout << res << "\n";
}
int main()
{
    lli t = 1; 
    cin >> t;
    while(t--) solve();
}