#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_set<int> occupied;
        bool valid = true;

        occupied.insert(a[0]); 

        for (int i = 1; i < n; ++i) {
            int seat = a[i];

            if (occupied.count(seat - 1) == 0 && occupied.count(seat + 1) == 0) {
                valid = false;
                break;
            }

            occupied.insert(seat); 
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
