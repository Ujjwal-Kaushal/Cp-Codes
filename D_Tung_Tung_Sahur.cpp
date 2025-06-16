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
#define MOD 1000000007

void solve()
{
    string p, s;
    cin >> p >> s;
    int n = p.size();
    int m = s.size();
    int i = 0, j = 0;
    bool var = true;
    while (i < n && j < m) {
        if (p[i] != s[j]) {
        var = false;
        break;
    }
    char c = p[i];
    int cp=0,cs=0;
    while(i<n && c==p[i]){
        cp++;
        i++;
    }
    while(j<m && c==s[j]){
        cs++;
        j++;
    }
    if(cs < cp || cs > 2*cp){
        var = false;
        break;
    }
}
    if (i != n || j != m) {
        var = false;
    }
    if(var)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}