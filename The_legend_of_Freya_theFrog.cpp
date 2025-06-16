#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        
        long long mx = (x + k - 1) / k;
        long long my = (y + k - 1) / k;
        
        long long tm = max(mx, my);
        
        cout << tm * 2 - (mx + my < tm ? 1 : 0) << endl;
    }

    return 0;
}
