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
    int n,q;
    cin >> n >> q;

    vi v(n),hsh(51,-1);
    
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        if(hsh[v[i]] == -1)
        {
            hsh[v[i]] = i+1;
        }
    }
    while(q--)
    {
        int temp;
        cin >> temp;

        int p = hsh[temp];
        for(int i = 1; i<=50; i++)
        {
            if(i == temp)
            {
                cout << hsh[temp] << " ";
                hsh[temp] = 1;
            }
            else if(hsh[i] < p)
            {
                hsh[i]++;;
            }
        }
    }
    cout << endl;
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