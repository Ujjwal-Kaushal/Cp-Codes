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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; ++i) 
    {
        if (abs(a[i] - a[i+1]) <= 1) 
        {
            cout << 0 << "\n";
            return;
        }
    }

    for(int i = 0; i < n - 1; ++i) 
    {
        int ai = a[i];
        int ai1 = a[i+1];
        int mn = min(ai, ai1);
        int mx = max(ai, ai1);
        
        bool is = false;
        if (i > 0) 
        {
            int prev = a[i-1];
            int low = max(mn, prev - 1);
            int high = min(mx, prev + 1);
            if (low <= high) {
                is = true;
            }
        }
        if(!is && i + 2 < n) 
        {
            int next_val = a[i+2];
            int low = max(mn, next_val - 1);
            int high = min(mx, next_val + 1);
            if (low <= high) {
                is = true;
            }
        }
        if(is) 
        {
            cout << 1 << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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