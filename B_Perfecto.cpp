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
        ll n = 1;
        cin >> n;
        vll v;

        for(int i = 1; i<=n; i++)
            v.push_back(i);
        
        bool is = true;
        ll s = 0;
        for(int i = 0; i<n; i++)
        {
            s += i+1;
            ll x = sqrt(s);

            if((x * x) == s)
            {
                if(i == n-1)
                {
                    is = false;
                    break;
                }
                swap(v[i],v[i + 1]);
            }
        }
        if(is)
        {
            for(auto i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
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