#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q;
    cin >> n;

    set<int> level;
    cin >> p;
    vector<int> v1(p);
    for(int i = 0; i<p; i++)
    {
        cin >> v1[i];
        level.insert(v1[i]);
    }
    cin >> q;
    vector<int> v2(q);
    for(int i = 0; i<q; i++)
    {
        cin >> v2[i];
        level.insert(v2[i]);
    }
    if(level.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}