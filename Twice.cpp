#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
void solve()
{
    ll n;
    cin >> n;
    vi v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    ll ans = 0;
    if(n == 1)
    {
        cout << ans << endl;
        return;
    }
    if(n == 2 && v[0] != v[1])
    {
        cout << ans << endl;
        return;
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(v[i] == v[j]) ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;

    while(t--) solve();

    return 0;
}