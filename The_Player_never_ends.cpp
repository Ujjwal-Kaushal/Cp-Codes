    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lli long long int
    #define vi vector<int>
    #define vll vector<long long>
    #define sort(all) sort(v.begin(),v.end())
    #define rev(all) reverse(v.begin(),v.end())
    #define pb push_back

    void solve()
    {
        ll k = 1;
        cin >> k;

        if(k % 3 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    int main()
    {
        ll t = 1;
        cin >> t;
        while(t--)
        {
            solve();
        }
    }