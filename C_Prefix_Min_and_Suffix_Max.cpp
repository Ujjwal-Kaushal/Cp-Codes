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

    if(n == 1)
    {
        cout << "1\n";
        return;
    }

    vi pref(n),suff(n);

    pref[0] = v[0];
    for(int i = 1; i<n; i++)
    {
        pref[i] = min(pref[i-1],v[i]);
    }

    suff[n-1] = v[n-1];
    for(int i = n-2; i>=0; --i)
    {
        suff[i] = max(suff[i+1],v[i]);
    }

    string res = "";

    for(int i = 0; i<n; i++)
    {
        int mn = (i == 0) ? INT_MAX : pref[i-1];
        int mx = (i == n-1) ? INT_MIN : suff[i+1];

        if(v[i] < mn || v[i] > mx) res += '1';
        else res += '0';
    }
    cout << res << "\n";

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