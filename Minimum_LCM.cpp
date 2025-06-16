#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = 1;
        for (int g = 2; g * g <= n; ++g) {
        if (n % g == 0) {
            a = n / g;
            break;
        }
        }
        cout << a << ' ' << n - a << '\n';
  }
}