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
    int k;
    cin >> k;

    vi v(k);
    for(int i = 0; i<k; i++) cin >> v[i];
    map<int,int> mp;
    for(int i = 0; i<k; i++)
    {
        mp[v[i]]++;
    }
    k -= 2;
    auto it = mp.begin();
    int n = -1, m = -1;
    while(it != mp.end())
    {
        int temp = it->first;
        if(k % temp == 0 && mp.find(k/temp) != mp.end())
        {
            n = temp;
            m = k/temp;
            break;
        }
        ++it;
    }
    cout << n << " " << m << "\n";
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