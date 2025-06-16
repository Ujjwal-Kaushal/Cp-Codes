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
    vector<int> v(n),temp(n);

    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++) temp[i] = v[i];

    sort(v.begin(),v.end());
    int sum = v[n-1];
    cout << sum << " ";
    for(int i = 1; i<n; i++)
    {
        if(i == 1)
        {
            sum = sum + temp[n-1];
            cout << sum << " ";
        }
        else
        {
            // cout << v[n-i] << " ";
            sum = sum + v[n-1-i];
            // cout << v[n-1-i] << " ";
            cout << sum << " ";
        }
    }
    cout << "\n";

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}