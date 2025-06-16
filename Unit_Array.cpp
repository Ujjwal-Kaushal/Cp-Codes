#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long
#define cotu cout
#define zz endl
#define pb push_back
#define po pop_back
#define vi v.begin()
#define ve v.end()

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            v.pb(a[i]);
        }
        int cnt = count(vi,ve,-1);
        //cout << cnt << " ";
        int sum = accumulate(vi,ve,0);
        int product = 1;
        for(int i = 0; i<n; i++)
        {
            product *= a[i];
        }
        if(sum < 0)
        {
            
        }
    }
    return 0;
}