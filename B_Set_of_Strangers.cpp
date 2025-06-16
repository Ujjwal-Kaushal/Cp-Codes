#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAX_N = 700;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int i, int j, int color, vector<vector<int>>& grid, vector<vector<bool>>& visited, vector<pair<int, int>>& component) {
    int n = grid.size(), m = grid[0].size();
    visited[i][j] = true;
    component.push_back({i, j});

    for (int d = 0; d < 4; d++) {
        int ni = i + dx[d], nj = j + dy[d];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && grid[ni][nj] == color) {
            dfs(ni, nj, color, grid, visited, component);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m));
    set<int> uniqueColors;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            uniqueColors.insert(grid[i][j]);
        }
    }

    int steps = 0;

    while (uniqueColors.size() > 1) {
        steps++;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        map<int, vector<pair<int, int>>> colorGroups;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j]) {
                    vector<pair<int, int>> component;
                    dfs(i, j, grid[i][j], grid, visited, component);
                    colorGroups[grid[i][j]] = component;
                }
            }
        }

        int maxColor = -1, maxSize = 0;
        for (auto& it : colorGroups) {
            if ((int)it.second.size() > maxSize) {
                maxSize = it.second.size();
                maxColor = it.first;
            }
        }

        if (maxColor == -1) break;

        for (auto& cell : colorGroups[maxColor]) {
            grid[cell.first][cell.second] = maxColor;
        }

        uniqueColors.erase(maxColor);
    }

    cout << steps << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
