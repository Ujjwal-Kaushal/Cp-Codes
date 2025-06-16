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
#define MOD 1000000007

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool mp = false;
    int zeros = 0;
    
    for (auto i = n - 1; i >= 0; --i) {
        if (s[i] != '0') {
            mp  = true;
        } else if (mp) {
            zeros++;
        }
    }
   
    cout << n - (zeros + 1) << '\n';
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