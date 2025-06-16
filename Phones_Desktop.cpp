// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     // main code
//     int x,y;
//     cin >> x >> y;
    
//     // int ans = 1;
//     // while(avail > 0)
//     // {
//     //     int temp = y/4;
//     //     if(temp <= 2)
//     //     {
//     //         avail -= y*4;
//     //     }
//     //     else
//     //     {
//     //         avail = 7;
//     //         int remaining = ceil(temp/2);
//     //         ans += remaining;
//     //     }

//     // }
//     int temp = ceil(y/2);
//     int remaining = 15*temp - 4*y;
//     int ans = remaining % x;
//     if(x == 0)
//     {
//         cout << temp << endl;
//     }
//     else
//     {
//         cout << temp + ans + 1<< endl;
//     }

// }
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }