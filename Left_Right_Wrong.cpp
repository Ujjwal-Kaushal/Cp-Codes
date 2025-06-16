#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> prefix(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    string s;
    cin >> s;
    
    prefix[0] = v[0];
    for(int i = 1; i<n; i++) // great optimisation after implementing prefix array, cause it gives TLE at test 7 because for a big array size >= 200000 the for loop (inside while loop) will have to run till n which makes it inefficient
    {
        prefix[i] = prefix[i-1] + v[i];

    }
    // for(int i = 0; i<n; i++) cout << prefix[i] << " ";
    ll start = 0,end = s.size()-1;
    ll ans = 0;

    while(start < end)
    {
        if(s[start] == 'L' && s[end] == 'R')
        {
            // for(int i = start; i<=end; i++)
            // {
            //     ans += v[i];
            // }
            ans += prefix[end] - prefix[start] + v[start];
            start++;
            end--;
            // for(int i = start; i<=end; i++)
            // {
            //     ans += v[i];
            // }
        }
        else if(s[start] == 'L' && s[end] == 'L')
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}