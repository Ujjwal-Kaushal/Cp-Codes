#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int digg(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        int temp = n % 10;
        cnt++;
        n = n / 10;
    }
    return cnt;
}
int main()
{

    for(int i = 1; i<=9; i++)
    {
        int temp = i;
        for(int j = 1; j<=4; j++)
        {

            v.push_back(temp);
            temp = temp * 10 + i;
        }

    }
    // for(int i = 0; i<v.size(); i++) cout << v[i] << " ";
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        int idx = 0;
        for(int i = 0; i<v.size(); i++)
        {
            if(v[i] == n) idx = i;

        }
        int sum = 0;
        for(int i = 0; i<=idx; i++)
        {
            sum += digg(v[i]);
        }
        cout << sum << endl;
    }
}