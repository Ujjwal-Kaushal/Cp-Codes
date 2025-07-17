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
    int n, k;
    cin >> n >> k;

    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    int i = 0;

    while(i <= n - k)
    {
        bool is = true;
        for(int j = 0; j < k; ++j)
        {
            if (v[i + j] == 1)
            {
                is = false;
                break;
            }
        }

        if(is)
        {
            ++ans;
            i += k + 1;
        }
        else
        {
            ++i;
        }
    }

    cout << ans << endl;
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