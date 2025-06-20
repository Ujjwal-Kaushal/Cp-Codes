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

    string a, b;
    cin >> a >> b;

    int z1 = 0, z2 = 0, l1 = 0, l2 = 0;
    for(int i = 0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            ++l1;
            if(a[i] == '0') z1++;
            if(b[i] == '0') z2++;
        }
        if(i % 2 != 0)
        {
            ++l2;
            if(a[i] == '0') z2++;
            if(b[i] == '0') z1++;
        }
    }
    if(z1 >= l1 && z2 >= l2) cout << "YES\n";
    else cout << "NO\n";
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