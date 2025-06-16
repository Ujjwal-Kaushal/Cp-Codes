#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define sort(all) sort(v.begin(),v.end())
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll cycleSum = a + b + c;
        ll fullCycles = n / cycleSum;
        ll remaining = n - (fullCycles * cycleSum);

        ll days = fullCycles * 3; 

        if (remaining > 0) {
            days++;
            if (remaining > a) {
                remaining -= a;
                days++;
                if (remaining > b) {
                    remaining -= b;
                    days++;
                }
            }
        }

        cout << days << endl;
    }

    return 0;
}
