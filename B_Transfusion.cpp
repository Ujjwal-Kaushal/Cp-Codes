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
    vector<int> v(n+1);
    int sum = 0, e = 0, o = 0;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if(i % 2 != 0) o += v[i];
        else e += v[i];

        sum += v[i];
    }

    if(sum % n == 0)
    {
        int on = (n + 1) / 2;
        int en = n - on;
        int avg = sum / n;

        if(o == on * avg && e == en * avg)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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