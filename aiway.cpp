#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tree;
vector<int> A;
vector<int> freq;
vector<int> mex_values;
int current_mex = 0;

void dfs(int node, int parent) {
    int val = A[node];
    if (val < freq.size()) {
        freq[val]++;
        // Update current_mex if the added value was the current_mex
        while (current_mex < freq.size() && freq[current_mex] > 0) {
            current_mex++;
        }
    }
    mex_values[node] = current_mex;

    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
        }
    }

    // Backtrack
    if (val < freq.size()) {
        freq[val]--;
        if (val < current_mex) {
            current_mex = val;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    A.resize(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    tree.resize(N + 1);
    for (int i = 0; i < N - 1; ++i) {
        int X, Y;
        cin >> X >> Y;
        tree[X].push_back(Y);
        tree[Y].push_back(X);
    }

    // The maximum possible MEX can't exceed N+1, so freq size is N+2
    freq.resize(N + 2, 0);
    mex_values.resize(N + 1, 0);
    current_mex = 0;

    dfs(1, -1);

    int max_mex = 0;
    for (int i = 1; i <= N; ++i) {
        if (mex_values[i] > max_mex) {
            max_mex = mex_values[i];
        }
    }

    cout << max_mex << endl;

    return 0;
}