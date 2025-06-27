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

    vi v(n), vd(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> vd[i];
    }

    int l = -1, r = -1;
    for(int i = 0; i<n; i++)
    {
        if(v[i] != vd[i])
        {
            if(l == -1) l = i;

            r = i;
        }
    }
    while(l > 0 && vd[l-1] <= vd[l]) l--;;
    while(r < n-1 && vd[r] <= vd[r+1]) r++;
    
    cout << l+1 << ' ' << r+1 << "\n";
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