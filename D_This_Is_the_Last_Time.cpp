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

    vector<vector<int>> v(n,vector<int>(3));

    for(int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }   
    sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] < b[0];
    });
    
    priority_queue<int> pq;
    int i = 0;
    bool is = true;
    while(is)
    {
        while(i < n && v[i][0] <= k)
        {
            if(v[i][1] >= k)
            {
                pq.push(v[i][2]);
            }
            ++i;
        }
        while(!pq.empty() && pq.top() <= k)
        {
            pq.pop();
        }

        if(pq.empty())
        {
            is = false;
            break;
        }
        k = pq.top();
        pq.pop();
    }
    
    cout << k  << "\n";
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