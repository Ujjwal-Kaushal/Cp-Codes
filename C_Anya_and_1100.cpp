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

bool check1100(const string &s, int pos) {
    if (pos >= 0 && pos + 3 < s.size()) {
        return s[pos] == '1' && s[pos + 1] == '1' && s[pos + 2] == '0' && s[pos + 3] == '0';
    }
    return false;
}
 
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
 
    int count = 0;
    for (int i = 0; i + 3 < n; ++i) {
        if (check1100(s, i)) count++;
    }
 
    while (q--) {
        int i, v;
        cin >> i >> v;
        --i;
 
        for (int j = i - 3; j <= i; ++j) {
            if (check1100(s, j)) count--;
        }
 
        s[i] = v + '0';
 
        for (int j = i - 3; j <= i; ++j) {
            if (check1100(s, j)) count++;
        }
 
        cout << (count > 0 ? "YES\n" : "NO\n");
    }
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