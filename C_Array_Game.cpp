#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void solve()
{
    lli n,k;
    cin >> n >> k;

    vector<lli> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    lli ans = v[0];
    if(k >= 3) {
        cout << 0 << "\n";
        return;
    }

    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            lli d = abs(v[i] - v[j]);

            ans = min(ans, d);
            if(k == 2) {
                int pos = lower_bound(v.begin(),v.end(),d) - v.begin();
                if(pos < n) {
                    ans = min(ans, abs(v[pos] - d));
                }
                if(pos > 0) {
                    ans = min(ans, abs(v[pos-1] - d));
                }
            }

        }
    }

    cout << ans << "\n";
    




}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}