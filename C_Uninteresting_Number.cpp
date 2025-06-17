#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353

void solve() {
    string s;
    cin >> s;

    int sum = 0;
    int count2 = 0, count3 = 0;

    for (char c : s) {
        int d = c - '0';
        sum += d;
        if (d == 2) count2++;
        if (d == 3) count3++;
    }

    bool possible = false;
    for (int i = 0; i <= count2; ++i) {
        for (int j = 0; j <= count3; ++j) {
            int newSum = sum + i * 2 + j * 6;
            if (newSum % 9 == 0) {
                possible = true;
                break;
            }
        }
        if (possible) break;
    }

    cout << (possible ? "YES" : "NO") << '\n';
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}