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
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    vi pref(n);
    pref[0] = v[0];
    for(int i = 1; i<n; i++)
    {
        pref[i] = pref[i-1] + v[i];
    }
    int sum = 0;
    
    for(int i = k-1; i<n; i++)
    {
        if(i == k-1) sum += pref[i];
        else
        {
            sum = sum + (pref[i] - pref[i-k]);
        }
    }
    double ans = (double)sum/(n-k+1);
    cout << fixed << setprecision(10) << ans << "\n";
}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    //}

    return 0;
}