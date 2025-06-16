#include <bits/stdc++.h>
using namespace std;

long long fac(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fac(n - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        unordered_map<int, int> mpp;
        int cnt = 0, cntUnique = 0;

        for (int i = 0; i < n; i++) {
            if (mpp.find(v[i]) == mpp.end()) {
                mpp[v[i]]++;
                cnt++;
            } else if (k > 0) {
                k--;
                cnt++;
            } else {
                cntUnique++;
            }
        }

        //cout << "cnt: " << cnt << ", cntUnique: " << cntUnique << "\n";

        if (cnt < 2) {
            cout << "0\n";
            continue;
        }

        long long ans = fac(cnt);
        long long ans1 = fac(cnt - 2);
        long long ans3 = ans / (ans1 * 2);
        ans3 += (cnt-cntUnique) * cntUnique;

        cout << ans3 << "\n";
    }
    return 0;
}
