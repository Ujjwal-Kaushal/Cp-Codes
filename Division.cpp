#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(v) sort(v.begin(),v.end())

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int rating;
        cin >> rating;

// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399

    if(rating >= 1900) cout << "Division 1" << "\n";
    if(rating >= 1600 && rating <= 1899) cout << "Division 2" << "\n";
    if(rating >= 1400 && rating <= 1599) cout << "Division 3" << "\n";
    if(rating <= 1399) cout << "Division 4" << "\n";

    
    }

    return 0;
}