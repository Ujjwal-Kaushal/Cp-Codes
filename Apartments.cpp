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

bool bs(multiset<int>& b, int a, int k) 
{
    auto it = b.lower_bound(a - k);
    if (it != b.end() && *it <= a + k) 
    {
        b.erase(it);  
        return true;
    }
    return false;
}

void solve() 
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    multiset<int> b;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0, x; i < m; i++) 
    {
        cin >> x;
        b.insert(x);
    }

    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < n; i++) 
    {
        if (bs(b, a[i], k)) 
        {
            ans++;
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();

    return 0;
}