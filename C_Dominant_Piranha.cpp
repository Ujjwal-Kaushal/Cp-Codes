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

    vi v(n), temp(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    set<int> s;
    int mx = -1;
    for(auto& i : v)
    {
        mx = max(mx,i);
        s.insert(i);
    }
    if(s.size() == 1)
    {
        cout << "-1\n";
    }
    
    else
    {
        int i;
        for(i = 0; i<n; i++)
        {
            if(i > 0 && v[i] == mx && v[i-1] != mx) break;
            else if(i < n-1 && v[i] == mx && v[i+1] != mx) break;
        }
        cout << i + 1 << "\n";
    }

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