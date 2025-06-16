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
#define MOD 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> bc(30, 0);
    for (int num : a) {
        for (int b = 0; b < 30; ++b) {
            if (num & (1 << b)) {
                bc[b]++;
            }
        }
    }
    
    int ms = 0;
    for (int k = 0; k < n; ++k) {
        int cs = 0;
        for (int b = 0; b < 30; ++b) {
            if (a[k] & (1 << b)) {
                cs += (1LL << b) * (n - bc[b]);
            } else {
                cs += (1LL << b) * bc[b];
            }
        }
        if (cs > ms) {
            ms = cs;
        }
    }
    
    cout << ms << '\n';
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}