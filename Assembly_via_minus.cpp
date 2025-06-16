#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll p = n * (n - 1) / 2; 

    vector<int> v(p); 
    for (int i = 0; i < p; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); 

    for (int i = 0; i < p; i += --n) {
        cout << v[i] << " ";
    }

    cout << 1000000000 << endl; 
}

int main() {
    ll t;
    cin >> t; 
    while (t--) solve(); 
    return 0;
}
