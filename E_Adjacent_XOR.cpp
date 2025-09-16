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

    vi a(n), b(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 0; i<n; i++)
    {
        cin >> b[i];
    }   
    if(a[n-1] != b[n-1])
    {
        cout << "NO\n";
        return;
    }
    vi temp;
    for(int i = 0; i<n-1; i++)
    {   
        if(a[i] != b[i]) temp.push_back(i);
    }

    for(int i = 0; i<temp.size(); i++)
    {
        cout << a[temp[i]] << " " << a[temp[i+1]] << "\n";  
        a[temp[i]] = a[temp[i]] ^ a[temp[i+1]];
    }

    int fl = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            fl = 1;
            break;
        }
    }
    cout << (fl ? "NO\n" : "YES\n");
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