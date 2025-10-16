#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> height;
vector<int> diameter;
int n;

void dfs(int u, int p) {
    int max1 = 0, max2 = 0; // top two heights from children

    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);

        // update child heights
        if (height[v] >= max1) {
            max2 = max1;
            max1 = height[v];
        } else if (height[v] > max2) {
            max2 = height[v];
        }

        diameter[u] = max(diameter[u], diameter[v]); // diameter from child
    }

    height[u] = 1 + max1;                // height of current node
    diameter[u] = max(diameter[u], max1 + max2); // pass-through case
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    adj.assign(n + 1, {});
    height.assign(n + 1, 0);
    diameter.assign(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, -1);

    cout << diameter[1] << "\n"; 
}
