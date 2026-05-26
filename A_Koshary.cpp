#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin >> x >> y;

    
    if(x % 2 != 0 && y % 2 != 0) cout << "NO" << endl;
    else cout << "YES\n";

}
int main()
{
    int t;
    cin >> t;
    if(t) {
        while(t--) {
            solve();
        }
    }
    return 0;   
}