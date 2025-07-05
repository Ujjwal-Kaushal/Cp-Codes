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

int poww(int x) 
{
    int temp = 1;
    while (temp <= x) 
    {
        if(temp > LLONG_MAX/2) 
        {
            return -1;
        }
        temp *= 2;
    }
    return temp;
}

void solve() 
{
    int n,l,r,k;
    cin >> n >> l >> r >> k;

    if (n % 2 != 0) 
    {
        cout << l << "\n";
    } 
    else 
    {
        int m = n/2;
        if(m == 1) 
        {
            cout << -1 << "\n";
            return;
        }
        
        int mn = poww(l);

        if(mn < 0 || mn > r) 
        {
            cout << -1 << "\n";
        } 
        else 
        {
            int idx = (k + 1)/2;
            
            if(idx < m) 
            {
                cout << l << "\n";
            } 
            else 
            {
                cout << mn << "\n";
            }
        }
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