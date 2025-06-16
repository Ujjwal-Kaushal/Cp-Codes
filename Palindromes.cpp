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
    string s;
    cin >> s;

    if(s.size() <= 3) cout << "NO" << endl;
    else
    {
        int f = 0,len = s.size();
        for(int i = 0; i<(len/2)-1; i++)
        {
            if(s[i] != s[i+1]) 
            {
                f = 1;
                break;
            }
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--) solve();
}