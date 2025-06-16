#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int mn1 = min(a,c);
    int mn2 = min(b,d);

    if(mn2 > mn1)
    {
        cout << "Flower\n";
    }
    else if(mn1 > mn2)
    {
        cout << "Gellyfish\n";
    }
    else
    {
        cout << "Gellyfish\n";
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}