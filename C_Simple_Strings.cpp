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
char getchar(char prev, char post)
{
    for(char i = 'a'; i<='z'; i++)
    {
        if(i != prev && i != post)
        {
            return i;
        }
    }
}
void solve()
{
    string s;
    cin >> s;

    vector<char> post;
    for(int i = 0; i<s.size()-1; i++)
    {
        post.pb(s[i+1]);
    }
    post.pb('.');
    char prev = s[0];
    for(int i = 1; i<s.size(); i++)
    {
        if(s[i] == prev)
        {
            prev = getchar(s[i],post[i]);
            s[i] = prev;
        }
        else prev = s[i];
    }
    cout << s << "\n";
}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();

    return 0;
}