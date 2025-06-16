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

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));


    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            mat[i][j] = row[j] - '0';
        }
    }

    int ir = 0;
    for (int i = 0; i < n; i++) {
        int rx = 0;
        for (int j = 0; j < m; j++) {
            rx ^= mat[i][j];
        }
        if (rx == 1) ir++;
    }

    int ic = 0;
    for (int j = 0; j < m; j++) {
        int cx = 0;
        for (int i = 0; i < n; i++) {
            cx ^= mat[i][j];
        }
        if (cx == 1) ic++;
    }
    cout << max(ir,ic) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
