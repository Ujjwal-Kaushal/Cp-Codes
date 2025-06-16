#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a[3][3];
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
    int flag = 0;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(a[i][j] == "?" && j == 0)
            {
                if(a[i][j+1] == "A" && a[i][j+2] == "B")
                {
                    flag = 1;
                    cout << "C" << "\n";
                    break;
                }
                if(a[i][j+1] == "B" && a[i][j+2] == "C")
                {
                    flag = 1;
                    cout << "A" << "\n";
                    break;
                }
                if(a[i][j+2] == "C" && a[i][j+2] == "A")
                {
                    flag = 1;
                    cout << "B" << "\n";
                    break;
                }
            }
            if(a[i][j] == "?" && j == 1)
            {
                if(a[i][j-1] == "A" && a[i][j+1] == "B")
                {
                    flag = 1;
                    cout << "C" << "\n";
                    break;
                }
                if(a[i][j-1] == "B" && a[i][j+1] == "C")
                {
                    flag = 1;
                    cout << "A" << "\n";
                    break;
                }
                if(a[i][j-1] == "C" && a[i][j+1] == "A")
                {
                    flag = 1;
                    cout << "B" << "\n";
                    break;
                }
            }
            if(a[i][j] == "?" && j == 2)
            {
                if(a[i][j-2] == "A" && a[i][j-1] == "B")
                {
                    flag = 1;
                    cout << "C" << "\n";
                    break;
                }
                if(a[i][j-2] == "B" && a[i][j-1] == "C")
                {
                    flag = 1;
                    cout << "A" << "\n";
                    break;
                }
                if(a[i][j-2] == "C" && a[i][j-1] == "A")
                {
                    flag = 1; 
                    cout << "B" << "\n";
                    break;
                }
            }
            
        }
        if(flag == 1) break;
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