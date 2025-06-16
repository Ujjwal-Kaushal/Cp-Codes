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
    string s;
    cin >> s;
    
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '0') ans++;
        else ans += n-1;
    }
    cout << ans << endl;

}
int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--) solve();
}