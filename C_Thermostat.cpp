#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
        int l,r,x;
        cin >> l >> r >> x;
    
        int a,b;
        cin >> a >> b;

        if(a==b){
			cout<<"0\n";
		}
		else if(abs(a-b)>=x){
			cout<<"1\n";
		}
		else if((a-l>=x&&b-l>=x)||(r-a>=x&&r-b>=x)){
			cout<<"2\n";
		}
		else if((a-l>=x&&r-b>=x)||(r-a>=x&&b-l>=x)){
			cout<<"3\n";
		}
		else{
			cout<<"-1\n";
		}
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        solve();

    }

    return 0;
}