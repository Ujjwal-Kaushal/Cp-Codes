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
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    int sum = 0;
    for(int i = 0; i<n; i++) sum += v[i];
    sort(v.begin(),v.end());
    v[n-1]--;
    sort(v.begin(),v.end());
    if(v[n-1] > v[0] + k)
    {
       cout << "Jerry\n";
       return;
    }
    if(sum % 2) cout << "Tom\n";
    else cout << "Jerry\n";

}

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}