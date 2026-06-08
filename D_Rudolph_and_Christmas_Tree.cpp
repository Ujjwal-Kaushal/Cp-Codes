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
    
    int n,d,h;
    cin >> n >> d >> h;

    vi v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    double total_area = 0.5 * d * h * n;
    double common_area = 0;

    vector<pair<int,int>> v1;
    for(int i = 0; i<n; i++) {
        v1.push_back({v[i], v[i] + h});
    }

    for(int i = 1; i<v1.size(); i++) {
        if(v1[i].first < v1[i-1].second) {
            double oh = v1[i-1].second - v1[i].first;
            if(oh > 0) {
                double od = (d * oh) / h;
                common_area += 0.5 * od * oh;
            }
        }
    }

    double res = total_area - common_area;
    cout <<  fixed << setprecision(7) << res << "\n";

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