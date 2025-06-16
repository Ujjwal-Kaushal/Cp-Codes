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
    int a;
    cin >> a;

    string temp = to_string(a);
    
    if(temp.substr(0,2) != "10")
    {
        cout << "NO\n";
    }
    else if(temp.size() < 3)
    {
        cout << "NO\n";
    }
    else if(temp.size() == 3)
    {
        if(temp[2] - '0' == 0 || temp[2] - '0' == 1)
        {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
    else
    {
        if(temp[2] - '0' == 0) cout << "NO\n";
        else cout << "YES\n";
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