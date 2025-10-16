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

    vi v(n);
    int c0 =0;
    for(int i = 0; i<n; i++) {
        cin >> v[i];
        c0 += (v[i] == 0);
    }

    vi temp(n+1,false);
    for(int i = 0; i<n; i++) {
        if(v[i] != 0) {
            temp[v[i]] = true;
        }
    }

    if(c0 == 1) {
        for(int i = 0; i<n; i++) {
            if(v[i] == 0) {
                for(int j = 1; j<=n; j++) {
                    if(!temp[j]) {
                        v[i] = j;
                        break;  
                    }
                }
            }
        }
    }

    int l = 0, r = n-1;
    while(l < n && v[l] == l+1) l++;
    while(r >= 0 && v[r] == r+1) r--;

    cout << max(0LL, (r-l+1)) << '\n';

    

    


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