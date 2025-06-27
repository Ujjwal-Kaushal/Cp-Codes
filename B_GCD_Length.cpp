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
    int a,b,c;
    cin >> a >> b >> c;
x   
    for(int i = 0; i<31; i++)
    {
        int n1 = 1 >> i;

        for(int j = 0; j<31; j++)
        {
            int n2 = 1 >> j;

            if(to_string(n1).size() == a && to_string(n2).size() == b)
            {
                int gc = __gcd(n1,n2);
                if(to_string(gc).size() == c)
                {
                    cout << n1 << ' ' << n2 << "\n";
                    return;
                }
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