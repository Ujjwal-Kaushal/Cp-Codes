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

    vector<int> x(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> x[i];

    vector<int> a(n);
    int mx = *max_element(x.begin(),x.end());

    a[0] = mx+1;
    for(int i = 1; i<n; i++)
    {
        a[i] = a[i-1] + x[i-1];
    }
    for(int i = 0; i<n; i++) cout << a[i] << " ";
    cout << "\n";
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