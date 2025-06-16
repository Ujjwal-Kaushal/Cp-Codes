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
    int w,h,a,b;
    cin >> w >> h >> a >> b;

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int inx1 = x1 + a;
    if(inx1 > w) inx1 = w;
    int iny1 = y1 + b;
    if(iny1 > h) iny1 = h;
    
    int inx2 = x2 + a;
    if(inx2 > w) inx2 = w;
    int iny2 = y1 + b;
    if(iny2 > h) iny2 = h;

    cout << inx1 << " " << inx2 << " "; 
    if((w - (inx1 + inx2)) % a == 0 && (h - (iny1 + iny2)) % b == 0) cout << "YES\n";
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