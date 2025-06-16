// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve()
// {
//     ll n;
//     cin >> n;

//     vector<ll> v(n);
//     if(n == 1)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     if(n == 2)
//     {
//         if(v[0] % 2 == 0 && v[1] % 2 == 0)
//         {
//             cout << 0 << endl;
//             return;
//         }
//         if(v[0] % 2 != 0 && v[1] % 2 != 0)
//         {
//             cout << 0 << endl;
//             return;
//         }
//         else
//         {
//             cout << 2 << endl;
//             return;
//         }
//     }
//     int odds = 0;
//     for(int i = 0; i<n; i++)
//     {
//         cin >> v[i];
//         if(v[i] % 2 != 0)
//         {
//             odds++;
//         }
//     }
//     int even = n - odds;
    
//     int maxx = max(odds,even);
//     if(maxx % 2 == 0)
//     {
//         if(n == maxx)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
            
//         }
//     }


    
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
// }