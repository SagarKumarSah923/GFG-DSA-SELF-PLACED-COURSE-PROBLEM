#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int n, int m, vector<vector<bool>>& visited) {
        if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j] == true || grid[i][j] == '0')
            return;

        visited[i][j] = true;
        dfs(grid, i + 1, j, n, m, visited);
        dfs(grid, i - 1, j, n, m, visited);
        dfs(grid, i, j + 1, n, m, visited);
        dfs(grid, i, j - 1, n, m, visited);
        dfs(grid, i + 1, j + 1, n, m, visited);
        dfs(grid, i - 1, j - 1, n, m, visited);
        dfs(grid, i - 1, j + 1, n, m, visited);
        dfs(grid, i + 1, j - 1, n, m, visited);
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && visited[i][j] == false) {
                    dfs(grid, i, j, n, m, visited);
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    Solution obj;
    int result = obj.numIslands(grid);

    cout << "Number of islands: " << result << endl;

    return 0;
}