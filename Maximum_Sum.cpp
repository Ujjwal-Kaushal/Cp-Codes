#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    sort(v.begin(),v.end());
    ll cnt = 0,end = n-1;
    for(int i = 0; i<n; i++)
    {
        ll temp1 = v[i]+v[i+1];
        ll temp2 = v[end];
        ll low = min(temp1,temp2);

        if(low == temp2)
        {
            v[end] = -1;
            end--;
            cnt++;
        }
        if(cnt == k)
        {
            break;
        }
        if(low == temp1)
        {
            v[i] = -1;
            v[i+1] = -1;
            i = i+2;
            cnt++;
        }
        if(cnt == k)
        {
            break;
        }
    }
    ll sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] == -1)
        {
            continue;
        }
        else
        {
            sum += v[i];
        }
    }
    cout << sum << endl;
}
int main()
{
    ll t;
    cin >> t;
    //  cout << "hi";
    while(t--)
    {
        solve();
    }
    return 0;
}