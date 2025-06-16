#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
 
    int res = 0, gold = 0;
    for (int i=0;i<n;i++){
        int cur;
        cin >> cur;
        if (!cur && gold) gold--, res++;
        else if (cur >= k) gold += cur; 
    }
 
    cout << res << '\n';
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}