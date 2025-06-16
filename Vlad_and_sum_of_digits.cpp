#include<bits/stdc++.h>
using namespace std;

int sod(int num)
{
    int s = 0;
    while(num > 0)
    {
        int temp = num % 10;
        s += temp;
        num /= 10;
    }
    return s;
}
void solve()
{
    int n;
    cin >> n;

    // vector<int> v;
    // for(int i = 1; i <= n; i++) v[i] = i;

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i >= 10)
        {
            int res = sod(i);
            //cout <<  i << " " << res << " ";
            sum += res;
        }
        else
        sum += i;
    }
    //cout << "\n";

    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}