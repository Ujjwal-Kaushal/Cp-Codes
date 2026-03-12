     #include<bits/stdc++.h>
    // #include <ext/pb_ds/assoc_container.hpp>
    // #include <ext/pb_ds/tree_policy.hpp>
    using namespace std;
    // using namespace __gnu_pbds;
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
    #define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

    void solve()
    {
        int n;
        cin >> n;

        vi v;
        for(int i = 0; i < (1LL << n); i++) {
            v.pb(i);
        }

        vi ispo2minus1, odd;
        for(int i = 0; i< v.size(); i++) {
            if(!(v[i] & (v[i]-1))) {
                ispo2minus1.pb(v[i]-1);
            }
        }

        sort(ispo2minus1.rbegin(), ispo2minus1.rend());

        set<int> sminus1;
        for(int i = 0; i<ispo2minus1.size(); i++) sminus1.insert(ispo2minus1[i]);

        for(int i = 0; i<v.size(); i++) {
            if(v[i] % 2 != 0 && sminus1.find(v[i]) == sminus1.end()) {
                odd.pb(v[i]);
            }
        }

        sort(odd.rbegin(), odd.rend());

        for(int i = 0; i<v.size(); i++) cout << v[i] << ' '; 

        for(int i = 0; i<ispo2minus1.size(); i++) {
            cout << ispo2minus1[i] << " ";
        }

        for(int i = 0; i<odd.size(); i++) {
            cout << odd[i] << " ";
        }

        for(int i = 0; i<v.size(); i++) {
            if(v[i] % 2 == 0) cout << v[i] << " ";

        }

        cout << "\n";


        



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