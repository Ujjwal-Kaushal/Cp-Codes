#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

bool isBeautifulMatrix(const string& s, int side) {
    for (int j = 0; j < side; ++j) {
        if (s[j] != '1' || s[(side-1) * side + j] != '1') {
            return false;
        }
    }
    
    for (int i = 1; i < side - 1; ++i) {
        if (s[i * side] != '1' || s[i * side + (side - 1)] != '1') {
            return false;
        }
        for (int j = 1; j < side - 1; ++j) {
            if (s[i * side + j] != '0') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (!isPerfectSquare(n)) {
            cout << "No" << endl;
            continue;
        }

        int side = sqrt(n);

        if (isBeautifulMatrix(s, side)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
