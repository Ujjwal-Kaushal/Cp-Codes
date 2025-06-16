#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> subtree_size;

// DFS to compute subtree sizes
void dfs(int node, int parent) {
    subtree_size[node] = 1;
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {
            dfs(neighbor, node);
            subtree_size[node] += subtree_size[neighbor];
        }
    }
}

int main() {
    int N;
    cin >> N;

    tree.resize(N + 1);
    subtree_size.resize(N + 1);

    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, -1);

    int min_deletions = N;

    // Iterate over possible x and y
    for (int x = 1; x < N; x++) {
        if ((N - 1) % x != 0) continue;
        int y = (N - 1) / x;
        if (y < 1) continue;

        int central_candidates = 0, sub_center_candidates = 0, leaf_candidates = 0;

        for (int i = 1; i <= N; i++) {
            if (subtree_size[i] == y + 1) sub_center_candidates++;
            else if (subtree_size[i] == 1) leaf_candidates++;
            else if (subtree_size[i] > x * (y + 1)) central_candidates++;
        }

        if (central_candidates > 1) continue;

        int deletions = N - (1 + x + x * y);
        min_deletions = min(min_deletions, deletions);
    }

    cout << min_deletions << endl;

    return 0;
}
