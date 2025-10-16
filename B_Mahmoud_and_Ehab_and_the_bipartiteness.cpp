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
    int color[2];
    vector<int> adj[100005];
    void dfs(int node, int pnode, int cnt) {
        color[cnt]++;
        for(int i = 0; i<adj[node].size(); i++) {
            if(adj[node][i] != pnode) {
                dfs(adj[node][i], node, 1-cnt);
            }
        }
    }
    void solve()
    {
        int n;
        cin >> n;

        for(int i = 1; i<n; i++) {
            int u,v;
            cin >> u >> v;

            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1,0,0);
        int ans = (color[0]*color[1]) - (n - 1);
        cout << ans << '\n';

        
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