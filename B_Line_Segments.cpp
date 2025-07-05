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

    int px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    
    int s = 0;
    int mx = 0;
    for(int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        s += x;
        if (x > mx) 
        {
            mx = x;
        }
    }

    int dx = px - qx;
    int dy = py - qy;
    int sq = dx * dx + dy * dy;
    int mxx = s * s;
    int mn = 2 * mx - s;

    if(mn < 0) 
    {
        mn = 0;
    }

    int temp = mn * mn;
    if(sq >= temp && sq <= mxx) 
    {
        cout << "Yes\n";
    } 
    else 
    {
        cout << "No\n";
    }  
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