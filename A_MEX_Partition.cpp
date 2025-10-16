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
        for(int i = 0; i<n; i++) {
            cin >> v[i];
        }

        set<int> s; 
        for(int i : v) {
            s.insert(i);
        }
        if(s.find(0) == s.end()) {
            cout << 0 << "\n";
            return;
        }
        for(int i = 1; i<=s.size(); i++) {
            if(s.find(i) == s.end()) {
                cout << i << '\n';
                return;
            }
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