#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n + 1);
        for (int i = 1; i <= n; ++i) cin >> p[i];
        
        string s;
        cin >> s;
        
        vector<int> vis(n + 1, 0), F(n + 1, 0);
        
        for (int i = 1; i <= n; ++i) {
            if (!vis[i]) {
                vector<int> cycle;
                int black_cnt = 0, cur = i;
                
                while (!vis[cur]) {
                    vis[cur] = 1;
                    cycle.push_back(cur);
                    if (s[cur - 1] == '0') black_cnt++;
                    cur = p[cur];
                }
                
                for (int x : cycle) F[x] = black_cnt;
            }
        }
        
        for (int i = 1; i <= n; ++i) cout << F[i] << " ";
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
