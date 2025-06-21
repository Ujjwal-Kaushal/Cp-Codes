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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    int area = l1*b1 + l2*b2 + l3*b3;
    int s = sqrt(area);
    bool is = (s*s == area) && ((l1+l2+l3==s && b1==b2 && b2==b3 && b1==s) || 
                     (b1+b2+b3==s && l1==l2 && l2==l3 && l1==s) ||
                     (l1==s && b1+b2==s && l2+l3==s && b2==b3) ||
                     (b1==s && l1+l2==s && b2+b3==s && l2==l3) ||
                     (l2==s && b1+b3==s && l1+l3==s && b1==b3) ||
                     (b2==s && l1+l3==s && b1+b3==s && l1==l3));
    cout << (is ? "YES" : "NO") << "\n";
    
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