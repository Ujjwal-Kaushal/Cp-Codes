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

        string s;
        cin >> s;

        int o = 0, z = 0;

        for(char c : s)
        {
            if(c == '1') o++;
            else z++;
        }
        if(o <= k)
        {
            cout << "Alice\n";
            return;
        }

        bool is = false;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == '0') cnt++;
            else cnt = 0;

            if(cnt >= k)
            {
                is = true;
                break;
            }
        }
        
        if(is || 2 * k <= n) cout << "Bob\n";
        else cout << "Alice\n";

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