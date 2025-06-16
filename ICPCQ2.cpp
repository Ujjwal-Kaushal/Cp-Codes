#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) cin >> arr[i];

        int totalSubsets = 1 << N; // 2^N subsets
        bool found = false;

        for (int mask = 1; mask < totalSubsets; ++mask) {
            int bitwiseAnd = -1;
            vector<int> indices;
            for (int i = 0; i < N; ++i) {
                if (mask & (1 << i)) {
                    if (bitwiseAnd == -1)
                        bitwiseAnd = arr[i];
                    else
                        bitwiseAnd &= arr[i];
                    indices.push_back(i + 1); // 1-based index
                }
            }

            if (bitwiseAnd == K) {
                found = true;
                cout << "YES\n";
                cout << indices.size() << '\n';
                for (int idx : indices) cout << idx << " ";
                cout << '\n';
                break;
            }
        }

        if (!found) cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
