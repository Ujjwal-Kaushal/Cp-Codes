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
#define MOD 1000000007
 
void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int ld = 0, rd = 0;
    if(l >= 0)
    {
        ld = l;
        rd = m;
    }
    else
    {
        int dl = abs(l);
        int dr = r;
        if(dl == dr)
        {
            if(rd > m)
            {
                ld = 0;
                rd = m;
            }
            else
            {
                int half = m/2;
                ld = -1*half;
                rd = half;
            }
        }
        else if(dl > dr)
        {
            if(r > m)
            {
                rd = m;
            }
            else
            {
                rd = r;
            }
            int temp = m - rd;
            ld = -1*temp;
        }
        else
        {
            if(l < m && m < 0)
            {
                ld = m;
            }
            else if(l < m && m > 0)
            {
                if(abs(l) > abs(m))
                    ld = -1*m;
                else
                    ld = l;
            }
            else
            {
                ld = l;
            }
            int temp = m + ld;
            rd = temp;
        }
        //cout << "l: " << l << "r: " << r << " ";
    }
    cout << ld << " " << rd << endl;    
}
int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--) solve();
}