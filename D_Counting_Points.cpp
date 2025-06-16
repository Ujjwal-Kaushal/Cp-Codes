// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define ll int
// #define lli long long int
// #define vi vector<int>
// #define vll vector<long long>
// #define rev(all) reverse(v.begin(),v.end())
// #define pb push_back
// #define pq_min priority_queue<int, vector<int>, greater<int>> 
// void solve() {
//     int n, m;
//     cin >> n >> m;
    
//     vector<int> x(n), r(n);
//     for (int &xi : x) cin >> xi;
//     for (int &ri : r) cin >> ri;

//     // unordered_set<pair<int, int>, hash<pair<int, int>>> points;

//     for (int i = 0; i < n; i++) {
//         int xi = x[i], ri = r[i];

//         for (int xj = xi - ri; xj <= xi + ri; xj++) {
//             int d = (xi - xj) * (xi - xj);
//             int r2 = ri * ri;

//             if (d > r2) continue;
//             int y_max = sqrt(r2 - d);

//             for (int y = -y_max; y <= y_max; y++) {
//                 points.insert({xj, y});
//             }
//         }
//     }

//     cout << points.size() << '\n';
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }