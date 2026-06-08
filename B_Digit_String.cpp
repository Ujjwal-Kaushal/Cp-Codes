#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0;
    int fl = 0;

    string temp = "";

    for(int i = 0; i<n; i++) {

        temp += s[i];
        int num = stoi(temp);
        if(fl) {
            if((s[i] - '0') % 4 == 0) {
                ans++;
            }
        }
        if(num % 4 == 0) {
            ans = max(ans, i+1);
        }
        else fl = 1;

    }

    cout << s.size() - ans << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}