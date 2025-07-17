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
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int last = v[k-1];

    int mx = *max_element(v.begin(), v.end());
    if(last == mx)
    {
        cout << "YES" << endl;
        return;
    }
    
    vi t = v;
    sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());
    int p = lower_bound(t.begin(), t.end(), last) - t.begin();
    bool is = true;

    for(int i = p; i < t.size()-1; i++)
    {
        if(t[i+1] - t[i] > last)
        {
            is = false;
            break;
        }
    }
    if(is)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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