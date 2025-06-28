#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1e9 + 7
#define mod 998244353

void solve()
{
        int n,k;
        cin>>n>>k;
        vector<vector<int> >v(n,vector<int>(n));
        for(auto& i:v){
            for(auto& j:i)cin>>j;
        }
        int cs=0;
        for(auto i=0; i<n/2; i++){
            for(auto j=0; j<n; j++){
                if(v[i][j]==v[n-1-i][n-1-j])cs++;
            }
        }
        if(n%2){
            for(auto i=0; i<n/2; i++){
                if(v[n/2][i]==v[n/2][n-1-i])cs++;
            }
        }
        int diff=(((n*n)/2)-cs);
        if(((diff%2==k%2)||(n%2))&&(diff<=k))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}