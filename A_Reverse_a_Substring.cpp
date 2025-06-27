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
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(is_sorted(s.begin(), s.end())) cout << "NO\n";
    else
    {
        for(int i = 0; i<n-1; i++)
        { 
            if(s[i] != s[i+1] && s[i] > s[i+1])
            {
                cout << "YES\n";
                cout << i + 1 << " " << i + 2 << "\n";
                return;
            }
        }
        cout << "NO\n";
    }

}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}