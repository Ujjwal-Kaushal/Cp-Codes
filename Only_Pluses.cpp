#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
int main()
{    
    int t;
    while(t--)
    {
        int a[3];
    for(int i = 0; i<3; i++)
        cin >> a[i];

    int i = 5; 
    while(i > 0)
    {
        sort(a,a+3);
        a[0]++;
        i--;
    }
    cout << a[0]*a[1]*a[2] << "\n";
    return 0;
    }
}