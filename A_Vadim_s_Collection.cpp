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

    vector<int> v(10,0);
    
    for(char c : s)
    {
        v[c - '0']++;
    }
    /*
    
        i = 0 ->  9
        i = 1 -> 8 
        i = 2 -> 
    */
    // for(int i : v) cout << i << " ";
    for(int i = 0; i<10; ++i)
    {
        for(int j = 9 - i; j<10; ++j)
        {
            if(v[j] > 0)
            {
                cout << j;
                v[j]--;
                break;
            }
        }
    }
    cout << "\n";
    
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}