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
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(auto& x : v)
    {
        cin >> x;
        x %= k;
        if(!x) x = k;
    }
    vi a(n);
    iota(a.begin(),a.end(),0);
    stable_sort(a.begin(),a.end(),[&](int i, int j){
        return v[i] > v[j];
    });
    for(auto& c : a) cout << c + 1 <<  ' ';
    cout << "\n";
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