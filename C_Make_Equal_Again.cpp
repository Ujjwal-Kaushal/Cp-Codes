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
    int n;
    cin >> n;

    vi v(n);

    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    int i1 = 0,i2 = 0;

    while(i1 < n && v[0] == v[i1]) i1++;
    while(i2 < n && v[n-1] == v[n-i2-1]) i2++;

    int ans = n;

    if(v[0] == v[n-1])
    {
        ans -= i1;
        ans -= i2;
    }
    else 
    {
        ans -= max(i1,i2);
    }
    cout << max((int)0,(int)ans) << "\n";

}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}