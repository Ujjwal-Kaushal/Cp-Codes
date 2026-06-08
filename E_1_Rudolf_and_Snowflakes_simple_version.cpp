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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int lim = 1e6;
void solve() {
    int n;
    cin >> n;

    set<int> s;
    
    for(int k = 2; k<=1000; k++) {
        int curr = 1 + k + k*k;
        int pw = k*k;
        
        s.insert(curr);
        while(true) {
            if(pw > lim/k) break;
            pw *= k;

            if(curr + pw > lim) break;
            curr += pw;
            if(curr > lim) break;

            s.insert(curr);
        }
    }

    cout << (s.count(n) == 1 ? "YES" : "NO") << "\n";


}

int32_t main() {
    fastIO;
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}