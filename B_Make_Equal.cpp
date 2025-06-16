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
    vector<int> a(n);
    long long sum = 0;
    for (auto &x : a) 
    {
        cin >> x;
        sum += x;
    }

    if (sum % n != 0) 
    {
        cout << "NO\n";
        return;
    }

    int k = sum / n;

    for (int i = 0; i < n - 1; ++i) 
    {
        if (a[i] < k) 
        {
            cout << "NO\n";
            return;
        }
        a[i + 1] += a[i] - k;
        a[i] = k;
    }

    cout << "YES\n";

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