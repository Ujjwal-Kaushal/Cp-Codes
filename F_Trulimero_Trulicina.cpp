#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll int
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define rev(all) reverse(v.begin(),v.end())
#define pb push_back
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define MOD 1000000007

void solve()
{
    int n,m,k;
	    cin>>n>>m>>k;
	    int val=1;
	    if(m%k!=0){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<m;j++){
	                cout<<val<<" ";
	                val++;
	                if(val>k)val=1;
	                
	            }
	            cout<<'\n';
	        }
	    }
	    else {
	        int start = 1;
            for (int i = 0; i < n; i++) {
                int val = start;
                for (int j = 0; j < m; j++) {
                    cout << val << " ";
                    val++;
                    if (val > k) val = 1;
                }
                cout << '\n';
                start++;
                if (start > k) start = 1;
            }
	        
	    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--) solve();
}