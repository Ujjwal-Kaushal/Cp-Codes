#include<bits/stdc++.h>
    using namespace std;
    #define int long long
    #define ll int
    #define lli long long int
    #define vi vector<int>
    #define vll vector<long long>
    #define rev(all) reverse(v.begin(),v.end())
    #define pb push_back
    #define pq_min priority_queue<int, vector<int>, greater<int>>
    #define MOD 1e9 + 7
    #define mod 998244353

    void solve()
    {
        int n,d;
        cin >> n >> d;

        string s;
        cin >> s;

        for(int i = 0; i<n; i++)
        {
            if(s[i] - '0' >= d) cout << s[i];
            else
            {
                cout << d;
                for(int j = i; j<n; j++) cout << s[j];

                cout << "\n";
                return;
            }
        }
        cout << d << "\n";
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