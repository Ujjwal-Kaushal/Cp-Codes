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

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<int> cnt(10, 0); // digit frequency

    // Traverse from right to left
    string res = "";
    for (int i = n - 1; i >= 0; --i) {
        int d = s[i] - '0';
        // Check if there is a digit ahead which is smaller
        bool push_right = false;
        for (int j = i + 1; j < n; ++j) {
            if (s[j] - '0' > d) {
                push_right = true;
                break;
            }
        }
        if (push_right && d < 9) d++; // increase the digit if possible
        cnt[d]++;
    }

    // Build final string in lexicographically decreasing order
    for (int d = 9; d >= 0; --d) {
        res += string(cnt[d], d + '0');
    }

    cout << res << '\n';
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