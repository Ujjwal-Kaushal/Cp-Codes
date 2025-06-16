#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>> 


void solve()
{
    int x,k;
    cin >> x >> k;
    auto isprime = [&](ll n) -> bool {
        if (n <= 1) {
            return 0;
        }
        for (ll i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    };
    if (k > 1 && x > 1) {
        cout << "NO" << "\n";
    }
    else if (k == 1) {
        if (isprime(x)) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    else {
        if(k == 2)
        {
            cout << "YES" << "\n";
        }   
        else
        {
            cout << "NO" << "\n";
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
            
}
