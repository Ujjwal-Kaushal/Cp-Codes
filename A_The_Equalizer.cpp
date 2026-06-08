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

void solve() {
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    int s = accumulate(v.begin(), v.end(), 0LL);
    if(s % 2 == 1 || (n*k) % 2 == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}