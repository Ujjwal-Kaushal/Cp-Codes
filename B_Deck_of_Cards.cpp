#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
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
    cin >> n >> k;
    
    string s;
    cin >> s;
    if(k == n) {
        for(int i = 0; i<k; i++) cout << '-';
        cout << "\n";
        return;
    }

    int one = 0, zero = 0, two = 0;
    for(char c : s) {
        if(c == '1') one++;
        else if(c == '0') zero++;
        else two++;
    }

    vector<char> res(n,'?');
    for(int i = 0; i<one; i++) res[n-i-1] = '-';
    for(int i = 0; i<zero; i++) res[i] = '-';

    int l = zero + two;
    int h = n - one  - two - 1;
    if(l <= h) {
        for(int i = l; i<=h; i++) res[i] = '+';
    }
    for(char c : res) cout << c;
    cout << endl;
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