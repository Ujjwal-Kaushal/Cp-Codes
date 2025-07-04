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
    string s;
    cin >> n >> s;

    for(int i = 1; i <= n-2; ++i) 
    {
        char b = s[i];
        bool is = false;

        for(int j = 0; j < i; ++j) 
        {
            if (s[j] == b) 
            {
                is = true;
                break;
            }
        }
        if(!is) 
        {
            for(int j = i+1; j < n; ++j) 
            {
                if (s[j] == b) 
                {
                    is = true;
                    break;
                }
            }
        }
        if(is) 
        {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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