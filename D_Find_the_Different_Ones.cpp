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

    vi v(n),p(n,-1);
    for(int i = 0; i<n; i++) cin >> v[i];

    for(int i = 1; i<n; i++)
    {
        p[i] = p[i-1];
        if(v[i] != v[i-1])
        {
            p[i] = i-1;
        }
    }

    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        --l;
        --r;
        if(p[r] < l) cout << -1 << " " << -1 << endl;
        else cout << p[r] + 1 << " " << (r+1) << endl;
        
    }
    cout << "\n";
    
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