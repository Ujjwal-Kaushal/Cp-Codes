// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll powoftwo(int n)
// {
    
//     return pow(2,n);
// }
// void solve()
// {

//     ll n,q;
//     cin >> n >> q;

//     vector<ll> v1(n);
//     for(int i = 0; i<n; i++) cin >> v1[i];

//     vector<ll> v2(q);
//     for(int j = 0; j<q; j++) cin >> v2[j];

//     // sort(v1.begin(),v1.end());
//     // sort(v2.begin(),v2.end());

//     for(int i = 0; i<q; i++)
//     {
//         ll temp = powoftwo(v2[i]);
//         // cout << temp << " ";
//         for(int j = 0; j<n; j++)
//         {
//             if(v1[j] % temp == 0)
//             {
//                 // cout << temp << "\n";
//                 // ll lol = v1[j];
//                 ll yum = v2[i] - 1;
//                 ll rough = powoftwo(yum);
//                 // cout << rough << " L\n";
//                 v1[j] +=  rough;
//             }   
//         }
//         // cout << endl;
//     }

//     for(int i = 0; i<n; i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << "\n";
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
// }

// The above code is in T.C - Big oh (n*q) which in worst case is big oh (n^2), we'll have to optimise this code.


