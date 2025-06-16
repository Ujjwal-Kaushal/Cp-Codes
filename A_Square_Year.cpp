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
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
    string s;
    cin >> s;

    int number = stoi(s);
    
    int root = sqrt(number);
    if(root < 10 && root * root == number)
    {
        cout << 0 << " " << root << "\n";
    }
    else if(root >= 10 && root * root == number)
    {
        cout << 0 << " " << root << "\n";
    }
    else cout << -1 << "\n";


    
  

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}