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

    vi v(n);

    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += v[i];
        if(sum <= 0)
        {
            cout << "NO\n";
            return;
        }
    }
    sum = 0;
    for(int i = n-1; i>=0; i--)
    {
        sum += v[i];
        if(sum <= 0)
        {
            cout << "NO\n";
            return;
        }
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