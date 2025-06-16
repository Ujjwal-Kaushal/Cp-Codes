#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back

void solve()
{
    int n;
    cin >> n;

    vi v(2*n);
    for(int i = 0; i<2*n; i++) cin >> v[i];

    int min = 0,max = 0;
    int ones = 0,zero = 0;
    for(int i = 0; i<2*n; i++)
    {
        if(v[i] == 1) ones++;
        else zero++;
    }
    if(zero > ones)
    {
        if(ones % 2 == 0)
        {
            cout << min << " " << ones << endl;
        }
        else
        {
            cout << ones % 2 << " " << ones << endl;
        }
    }
    else if(zero == ones)
    {
        if(ones % 2 == 0 && zero % 2 == 0)
        {
            cout << min << " " << zero << endl;
        }
        else
        {
            cout << ones % 2 << " " << zero << endl;
        }
    }
    else
    {
        if(zero % 2 == 0)
        {
            cout << min << " " << zero << endl;
        }
        else
        {
            cout << ones % 2 << " " << zero << endl;
        }
    }

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