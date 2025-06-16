#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int total_sum = a + 2 * b;

        if (total_sum % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int half_sum = total_sum / 2;

            int max_twos_used = min(b, half_sum / 2);
            int remaining_sum = half_sum - max_twos_used * 2;

            if (remaining_sum <= a) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
