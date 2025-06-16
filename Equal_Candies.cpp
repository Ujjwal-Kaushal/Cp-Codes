#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    int s = 0;
    sort(v.begin(),v.end());
    for(int i = 1; i<n; i++)
    {
        s += v[i] - v[0];
    }
    cout << s << endl;
}