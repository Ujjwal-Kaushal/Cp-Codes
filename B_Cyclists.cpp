#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
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
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

void solve() {
    int n,k,p,m;
    cin >> n >> k >> p >> m;

    vector<int>a(n);
    for(int &x : a) cin >> x;

    deque<pair<int,int>> deck;

    for(int i=0;i<n;i++)
        deck.push_back({a[i], i});

    int energy = m;
    int ans = 0;

    while(true) {

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        int limit = min(k, (int)deck.size());

        for(int i=0;i<limit;i++)
            pq.push({deck[i].first, i});

        auto [cost, idx] = pq.top();

        if(energy < cost) break;

        energy -= cost;

        auto card = deck[idx];

        deck.erase(deck.begin() + idx);
        deck.push_back(card);

        if(card.second == p-1)
            ans++;
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();
}