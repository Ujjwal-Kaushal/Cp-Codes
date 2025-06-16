#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 1; i<=1667; i++)
    {
        if(i % 10 == 3 || i % 3 == 0) continue;
        else cnt++;

        if(cnt == n)
        {
            cout << i << "\n";
            break;
        }
    }

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