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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool is = true;
        int d = a[1] - a[0]; 
        
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i-1] != d) {
                is = false;
                break;
            }
        }
        
        if (!is) {
            cout << "NO\n";
            return;
        }
    
        int c = a[0] - d;
        if (c < 0 || c % (n + 1) != 0) {
            cout << "NO\n";
            return;
        }
        
        int y = c / (n + 1);
        int x = d + y;
 
        if (x < 0) {
            cout << "NO\n";
            return;
        }
        
        cout << "YES\n";


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