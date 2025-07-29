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
    int n, m;
    cin >> n >> m;

    vi a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    multiset<int> ms(a.begin(), a.end());

    for(int i = 0; i<m; i++)
    {
        auto it = ms.upper_bound(b[i]);
        if(it == ms.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            --it;
            cout << *it << endl;
            ms.erase(it);
        }
    }
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