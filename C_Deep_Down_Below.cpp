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

    vector<vector<int>> v(n);

    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        v[i].resize(a+1);
        v[i][0] = a;

        for(int j = 1; j<=a; j++)
        {
            cin >> v[i][j];
        }
    }


    int sum = accumulate(v[0].begin() + 1, v[0].begin() + 1 + v[0][0], 0);
    int avg = sum / v[0][0];
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 1; j<=v[i][0]; j++)
        {
            if(v[i][j] < avg)
            {
                cnt++;
            }
        }
    }
    cout << avg + cnt << "\n";
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