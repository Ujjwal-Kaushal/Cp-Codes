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
    sort(v.begin(),v.end());
    int ans = INT_MAX, cnt = 0;

    int l = 0, r = n-1,ops1 = 0, ops2 = 0;
    while(l < r && (v[l] + v[r]) % 2 != 0)
    {
        l++;
        ops1++;
    }
    l = 0, r = n-1;
    while(l < r && (v[l] + v[r]) % 2 != 0)
    {
        r--;
        ops2++;
    }
    cout << min(ops1,ops2) << "\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}