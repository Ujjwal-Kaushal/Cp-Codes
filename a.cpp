#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pq_min priority_queue<int, vector<int>, greater<int>> 

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];

    pq_min lh, rh;
    priority_queue<int> mh, mhh;
    int s = 0;
    
    for (int i = l - 1; i < r; i++) {
        s += a[i];
        mh.push(a[i]);
    }
    for (int i = 0; i < l - 1; i++) lh.push(a[i]);
    for (int i = r; i < n; i++) rh.push(a[i]);

    int t = s;

    while (!mh.empty() && !lh.empty() && lh.top() < mh.top()) { 
        s += lh.top() - mh.top();
        mh.pop();
        lh.pop();
    }

    for (int i = l - 1; i < r; i++) {
        mhh.push(a[i]);
    }

    while (!mhh.empty() && !rh.empty() && rh.top() < mhh.top()) { 
        t += rh.top() - mhh.top();
        mhh.pop();
        rh.pop();
    }

    cout << min(s, t) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
