#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

lli fac(lli num)
{
    if(num == 0 || num == 1)
    {
        return 0;
    }
    return num * fac(num-1);
}
// void solve()
// {
//     lli n = 1,d = 1;
//     cin >> n >> d;

//     lli res = fac(n), i = 1;
//     lli num = 0;
//     for(int i = 0; )
// }
int main()
{
    lli t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}