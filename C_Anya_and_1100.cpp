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
    string s;
    cin >> s;

    int q;
    cin >> q;

    while(q--)
    {
        int i,v;
        cin >> i >> v;

        char c = s[i];
        s.replace(s[i],1,to_string(v));
        cout << s << " "; 
        if(s.find("1100") != string::npos) cout << "YES\n";
        else cout << "NO\n";

        s.replace(s[i],1,to_string(c));
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