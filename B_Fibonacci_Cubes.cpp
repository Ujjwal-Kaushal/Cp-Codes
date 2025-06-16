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
    int n,m;
    cin >> n >> m;

    string temp = "";
    vector<int> fibo(n);
    fibo[0] = 1;
    fibo[1] = 2;
    for(int i = 2; i<n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    for(int i = 0; i<m; i++)
    {
        int w,l,h;
        cin >> w >> l >> h;

        int y = 1;
        y &= (fibo[n-1] <= w && fibo[n-1] <= l && fibo[n-1] <= h);
        y &= (fibo[n-1] + fibo[n-2] <= max({w,l,h}));

        cout << (y ? "1" : "0");
    }

    cout << endl;
    
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