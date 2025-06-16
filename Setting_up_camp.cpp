#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;

        int ans = 0;
        if(y % 3 == 0 && (z % 2 == 0 || z % 3 == 0))
        {
            if(z % 3 == 0)
            {
                ans += x + (y/3) + (z/3);
                break; 
            }
            else if(z % 2 == 0)
            {
                ans += x + (y/3) + (z/2);
                break;
            }
            else
            {
                ans += x + (y/3) + 1;
            }
        }
        else
        {
            int temp = max(y,z);
            while(y % 3 != 0 && (z % 2 != 0 || z % 3 != 0))
            {
                if(temp == y)
                {
                    y--;
                    z++;
                }
                else
                {
                    z--;
                    y++;
                }
            }
        }

    }
}