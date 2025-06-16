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
    
    int i = 0, j = n - 1;
    int s1 = 0, s2 = 0, ans = 0;

    while (i <= j) 
    {
        if (s1 <= s2) 
        {
            s1 += v[i++];
        } 
        else 
        {
            s2 += v[j--];
        }

        if (s1 == s2) 
        {
            // cout << n - j - 1 << ' ';
            ans = i + (n - j - 1);
        }
    }

    cout << ans << "\n";
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