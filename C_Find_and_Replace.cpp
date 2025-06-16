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
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int v[26];
    for(int i = 0; i<26; i++) v[i] = -1;
    for(int i = 0; i<n; i++)
    {
        int t = (s[i] - 'a');
        if(v[t] == -1) v[t] = (i % 2);
        else
        {
            if(v[t] != (i % 2))
            {
                cout << "NO\n";
                return;
            }
        }  
    }
    cout << "YES\n";

}
int32_t main()
{
    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}