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

int help(vector<int>& v, int n, int k)
{
    vector<int> rem(n);
    int eve = 0;
    for(int i = 0; i<n; i++)
    {
        rem[i] = v[i] % k;
        if(rem[i] == 0) return 0;
        rem[i] = k - rem[i];
        if(!(v[i] & 1)) eve++;
    }

    int ans = *min_element(rem.begin(),rem.end());
    if(k == 4)
    {
        if(eve == 0) return min((int)ans,(int)2);
        if(eve == 1) return 1;
        if(eve >= 2) return 0;
    }
    return ans;
}
void solve()
{
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    cout << help(v,n,k) << "\n";
    
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