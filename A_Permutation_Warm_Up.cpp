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
    int n;
    cin >> n;

    int sum = 0,j = 1;
    for(int i = n; i>=1; i--)
    {
        int temp = abs(i - j);
        sum = sum + temp;
        j++;
    }
    int res = (sum/2)+1;
    cout << res << "\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}