#include<bits/stdc++.h>
using namespace std;
 
int sod(int num)
{
    int s = 0;
    while(num > 0)
    {
        int temp = num % 10;
        s += temp;
        num /= 10;
    }
    return s;
}
 
int main() {
    int t;
    cin>>t;
    vector<int> hash(200001);
    hash[0] = 0;
    for(int i=1; i<200001; i++){
        hash[i] = hash[i-1] + sod(i);
    }
    while(t--){
        int n;
        cin>>n;
        cout << hash[n] << endl;
    }
 
    return 0;
}