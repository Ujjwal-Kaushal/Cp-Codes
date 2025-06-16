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
    int n,k;
    cin >> n >> k;

    vector<int> a(n),b(n),temp(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++)
    {
        cin >> b[i];
        temp[i] = b[i];
    }

    sort(b.begin(),b.end());

    int f = 0,ref = 0;
    for(int i = 0; i<n; i++)
    {
        if(temp[i] != -1)
        {
            f = 1;
            ref = temp[i] + a[i];
            break;
        }
    }
    cout << ref << " ";
    if(!f)
    {
        int large = b[n-1];
        cout << 10 - large + 1 << "\n";
    }
     
    else
    {
        for(int i = 0; i<n; i++)
        {
            if(temp[i] != -1 && temp[i] != ref)
            {
                cout << 0 << "\n";
                return;
            }
            if(temp[i] == -1)
            {
                if(ref - a[i]> k)
                {
                    cout << "f1 " << " ";
                    cout << 0 << "\n";
                }
            }
        }
        cout << 1 << "\n";
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}