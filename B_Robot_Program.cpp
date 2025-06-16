#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    lli n,x,k;
    cin >> n >> x >> k;

    string s;
    cin >> s;

    lli ans = 0;
    for(int i = 0; i<n; i++)
    {
        x += (s[i] == 'L' ? -1 : +1);
        --k;
        if(!x) break;
    }
    if(!x)
    {
        ans = 1;
        for(int i = 0; i<n; i++)
        {
            x += (s[i] == 'L' ? -1 : +1);
            if(!x)
            {
                ans += k/(i+1); 
                break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    lli t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
}