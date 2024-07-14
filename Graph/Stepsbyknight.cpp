#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct cell {
    int x, y;
    int dis;
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

class Solution {
public:
    bool is(int x, int y, int N) {
        if (x >= 1 && x <= N && y >= 1 && y <= N)
            return true;
        return false;
    }
    
    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
        int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
        queue<cell> q;
        q.push(cell(KnightPos[0], KnightPos[1], 0));
        
        int x, y;
        bool visit[N + 1][N + 1] = {false};
        visit[KnightPos[0]][KnightPos[1]] = true;
        
        while (!q.empty()) {
            cell t = q.front();
            q.pop();
            
            if (t.x == TargetPos[0] && t.y == TargetPos[1])
                return t.dis;
            
            for (int i = 0; i < 8; i++) {
                x = t.x + dx[i];
                y = t.y + dy[i];
                
                if (is(x, y, N) && !visit[x][y]) {
                    visit[x][y] = true;
                    q.push(cell(x, y, t.dis + 1));
                }
            }
        }
        return -1; // If target position is unreachable
    }
};

int main() {
    vector<int> KnightPos = {4, 5};
    vector<int> TargetPos = {1, 1};
    int N = 8; // Board size

    Solution obj;
    int result = obj.minStepToReachTarget(KnightPos, TargetPos, N);

    cout << "Minimum steps required: " << result << endl;

    return 0;
}