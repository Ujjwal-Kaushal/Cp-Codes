#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

bool istemp(const vector<int>& a, const string& s) {
    unordered_map<int, char> ntoc;
    unordered_map<char, int> cton;

    for (int i = 0; i < a.size(); ++i) {
        if (ntoc.count(a[i]) == 0 && cton.count(s[i]) == 0) {
            ntoc[a[i]] = s[i];
            cton[s[i]] = a[i];
        } else if (ntoc[a[i]] != s[i] || cton[s[i]] != a[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int m;
        cin >> m;

        for (int i = 0; i < m; ++i) {
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO\n";
            } else {
                if (istemp(a, s)) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}
