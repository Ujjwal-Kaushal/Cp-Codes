#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int min_ops_to_alternate(string s) {
    int n = s.length();
    if (n % 2 != 0) {
        int min_ops = n;
        for (int i = 0; i < n; ++i) {
            string ns = s.substr(0, i) + s.substr(i + 1);
            int ops = 0;
            for (int j = 0; j < ns.length(); ++j) {
                if (j % 2 == 0 && ns[j] != ns[0]) ops++;
                if (j % 2 != 0 && ns[j] != ns[1]) ops++;
            }
            min_ops = min(min_ops, ops + 1);
        }
        return min_ops;
    } else {
        int ops_even = 0, ops_odd = 0;
        for (int i = 0; i < n; i += 2) if (s[i] != s[0]) ops_even++;
        for (int i = 1; i < n; i += 2) if (s[i] != s[1]) ops_odd++;
        return ops_even + ops_odd;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << min_ops_to_alternate(s) << endl;
    }
    return 0;
}
