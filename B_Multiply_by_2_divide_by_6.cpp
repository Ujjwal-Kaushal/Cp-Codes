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
void solve() {
    int n;
    cin >> n;
    int moves = 0;
    
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        } else if (n % 3 == 0) {
            n *= 2;
        } else {
            cout << -1 << "\n";
            return;
        }
        moves++;
    }
    cout << moves << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
