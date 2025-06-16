#include <bits/stdc++.h>
 
using namespace std;
// Shortcuts
#define ll long long
#define lli long long int
#define pb push_back
#define po pop_out
#define vi v.begin()
#define ve v.end()
#define yes cout << yes << "\n"
#define no cout << no << "\n"
#define cotu cout
#define cont continue
#define rev reverse(vi,ve);
#define f_loop for(int i = 0; i<v.size(); i++)
#define w_loop while(start <= end)
// Inbuilt algo's

 /* ll min = *min_element(vi,ve);
    ll max = *max_element(vi,ve);
    ll sum = accumulate(vi,ve,0);
    ll cnt = count(vi,ve,num);
    auto it = find(vi,ve,num);
 */
void solve() {
	int n;
	cin >> n;
	int winner = -1, bestscore = 0;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		if (b > bestscore && a <= 10) {winner = i; bestscore = b;}
	}
	cout << winner << '\n';
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    solve();

}