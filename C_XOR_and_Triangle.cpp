#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>

void solve() {
    int x;
    cin >> x;

    int a = 1,b = 1;
    while(b <= x)
    {
        a = b;
        b *= 2;
    }
    a--;
    int z = x ^ a;
    if(x + a > z && x + z > a && z + a > x)
    {
        cout << a << "\n";
    }
    else
        cout << -1 << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}