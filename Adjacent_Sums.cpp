#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
int sod(int num)
{
    int ans = 0;
    while(num > 0)
    {
        int temp = num % 10;
        ans = ans + temp;
        num /= 10;
    }
    return ans;
}
void solve()
{
    ll x = 1, y = 1;
    cin >> x >> y;
    if(abs(x - y) == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if(x == 9 && y == 1 || x == 99 && y == 1 || x == 999 && y == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int s1 = sod(9);
    int s2 = sod(99);
    int s3 = sod(999);
    if(s1 == x && y == 1 || s2 == x && y == 1 || s3 == x && y == 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}