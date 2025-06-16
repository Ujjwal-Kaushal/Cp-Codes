#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

void solve()
{
    ll n = 1, m = 1;
    cin >> n >> m;
    int res=0;
    vector<pair<int,int>> v;
    for(int i = 0; i<n; i++)
    {
        vector<int> haha (m);
        int sum=0;
        for(int j = 0; j<m; j++)
        {
            cin >> haha[j];
            if(j>0) haha[j]+=haha[j-1];
            sum+=haha[j];
        }
        v.push_back({haha[m-1], sum});
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.first > b.first;
    });

    for(int i=0;i<n;i++){
        res+=v[i].second;
        res+=(v[i].first)*(n-1-i)*m;
    }
    cout << res << endl;

}
int32_t main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}