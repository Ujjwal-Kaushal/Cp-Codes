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

void solve() {
    int n;
    cin >> n;

    vi v(n);
    multiset<int> st;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        
    }
    for(int i : v) st.insert(i);

    sort(v.rbegin(), v.rend());
    int fl = 0;
    for(int i = 0; i<n-1; i++) {
        int modd = v[i] % v[i+1];
        if(st.find(modd) == st.end()) {
            fl = 1;
            break;
        }
    }
    
    if(fl) cout << -1 << "\n";
    else cout << v[0] << " " << v[1] << "\n"; 
 


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