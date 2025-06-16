#define ll long long
#define pb push_back
#define vi v.begin()
#define ve v.end()


#include<bits/stdc++.h>

using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,x;
        cin >> n >> x >> k;
        if((k >= (x*(x+1))/2) && k <= (n*(n+1))/2 - ((n-x)*(n-x+1))/2)
        cout << "YES"  << "\n";
        else
        cout << "NO" << endl; 
    }

}