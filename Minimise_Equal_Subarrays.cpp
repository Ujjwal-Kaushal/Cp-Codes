#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> v1(n);
    vector<ll> v2(n);

    for(int i = 0; i<n; i++) cin >> v1[i];
    
    v2[0] = v1[n-1];
    for(int i = 1; i<n; i++)
    {
        v2[i] = v1[i-1];
    }
    for(int i = 0; i<n; i++) cout << v2[i] << " ";

    cout << "\n";
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
