#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

void bfs(vector<vector<int>>& grid, vector<vector<int>>& visited, int i, int j, int& volume) {
    int n = grid.size(), m = grid[0].size();
    queue<pair<int, int>> q;
    q.emplace(i, j);
    visited[i][j] = true;
    volume += grid[i][j];
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for (int k = 0; k < 4; ++k) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] && !visited[nx][ny]) {
                q.emplace(nx, ny);
                visited[nx][ny] = true;
                volume += grid[nx][ny];
            }
        }
    }
}

int largestLakeVolume(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m));
    vector<int> lakes;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] && !visited[i][j]) {
                int volume = 0;
                bfs(grid, visited, i, j, volume);
                lakes.push_back(volume);
            }
        }
    }
    sort(lakes.rbegin(), lakes.rend());
    return lakes.empty() ? 0 : lakes[0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }
        cout << largestLakeVolume(grid) << '\n';
    }
    return 0;
}



