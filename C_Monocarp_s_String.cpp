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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 0, b = 0;
    for(char c : s) {
        if (c == 'a') a++;
        else b++;
    }

    if(a == b) {
        cout << 0 << "\n";
        return;
    }

    int diff = a - b;

    unordered_map<int, int> mp;
    mp[0] = 0;
    int res = 0;
    int ans = LLONG_MAX;

    for(int i = 0; i < n; i++) {
        if (s[i] == 'a') res++;
        else res--;

        int temp = res - diff;
        if (mp.count(temp)) {
            ans = min(ans, i + 1 - mp[temp]);
        }

        if (!mp.count(res)) {
            mp[res] = i + 1;
        }
    }
    if(ans == LLONG_MAX) cout << -1 << "\n";
    else cout << ans << "\n";
    
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
