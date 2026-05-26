#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v1,v2,v3,v4;
    for(int i = 0; i<n; i++) {
        if(v[i] % 6 == 0)
        {
            v1.push_back(v[i]);
        }
        else if(v[i] % 2 == 0 && v[i] % 3 != 0) {
            v2.push_back(v[i]);
        }
        else if(v[i] % 3 == 0 && v[i] % 2 != 0) {
            v3.push_back(v[i]);
        }
        else
        {
            v4.push_back(v[i]);
        }
    }

    for(int i : v1) cout << i << ' ';
    for(int i : v2) cout << i << ' ';
    for(int i : v4) cout << i << ' ';
    for(int i : v3) cout << i << ' ';
    cout << endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}