#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>> 


void solve()
{
    int a,b,c;
    cin >> a >> b >> c;

    int avg = (a+b+c)/3;
    int mod = (a+b+c) % 3;
    if(mod)
    {
        cout << "NO\n";
        return;
    }
    if(c > avg)
    {
        if(b > avg)
        {
            cout << "NO\n";
            return;
        }
        if(a > avg)
        {
            cout << "NO\n";
            return;
        }
        int diff = avg - b;
        int d = avg - a;
        if(c > diff+d) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}