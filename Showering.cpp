#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool canShower(int n, int s, int m, vector<pair<int, int>>& iv) {
    sort(iv.begin(), iv.end());
    if (iv[0].first >= s) return true;
    for (int i = 1; i < n; ++i) {
        if (iv[i].first - iv[i-1].second >= s) return true;
    }
    if (m - iv[n-1].second >= s) return true;
    return false;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> iv(n);
        for (int i = 0; i < n; ++i) {
            cin >> iv[i].first >> iv[i].second;
        }
        
        if (canShower(n, s, m, iv)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}