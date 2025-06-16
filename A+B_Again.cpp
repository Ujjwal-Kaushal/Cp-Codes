#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int s = 0;
        s = n%10;
        n = n/10;
        s += n;
        cout << s << endl;
    }
}