#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution 
{
public:
    bool isvalid(int x, int y, vector<vector<int>>& grid) {
        if (x < grid.size() && x >= 0 && y < grid[0].size() && y >= 0) {
            return true;
        } 
        return false;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        vector<int> dx = {1, -1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};
        queue<pair<int, int>> que;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 2) {
                    que.push({i, j});
                    grid[i][j] = 0;
                } else if (grid[i][j] == 1) {
                    grid[i][j] = INT_MAX;
                } else {
                    grid[i][j] = INT_MIN;
                }
            }
        }
        
        while (!que.empty()) {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            
            for (int i = 0; i < 4; i++) {
                int tx = x + dx[i];
                int ty = y + dy[i];
                
                if (isvalid(tx, ty, grid)) {
                    if (grid[tx][ty] > grid[x][y] + 1) {
                        grid[tx][ty] = grid[x][y] + 1;
                        que.push({tx, ty});
                    }
                }
            }
        }
        
        int t = INT_MIN;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                t = max(t, grid[i][j]);
            }
        }
        return (t < 0) ? 0 : (t == INT_MAX) ? -1 : t;
    }
};

int main() {
    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};

    Solution obj;
    int result = obj.orangesRotting(grid);

    cout << "Time to rot all oranges: " << result << endl;

    return 0;
}