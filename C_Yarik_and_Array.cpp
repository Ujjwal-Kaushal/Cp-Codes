#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long max_sum = a[0], current_sum = a[0];
    
    for (int i = 1; i < n; i++) {
        if ((a[i] % 2) != (a[i - 1] % 2)) {
            current_sum += a[i];
        } else {
            current_sum = a[i];
        }
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
