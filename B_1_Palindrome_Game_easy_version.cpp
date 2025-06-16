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
    string s;
    cin >> s;
    
    int zeros = 0;
    for(int i = 0; i<n; i++) zeros += s[i] == '0' ? 1 : 0;
    if(zeros == 1)
    {
        cout << "BOB\n";
    }
    else if(zeros % 2)
    {
        cout << "ALICE\n";
    }
    else
    {
        cout << "BOB\n";
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
}