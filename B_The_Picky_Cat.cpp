#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>> 

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++)
    {
        v[i] = abs(v[i]);
    }
    int fi = v[0];
    sort(v.begin(),v.end());
    int me = ceil(n/2);
    if(fi <= v[me]) cout << "YES\n";
    else cout << "NO\n";

    
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}