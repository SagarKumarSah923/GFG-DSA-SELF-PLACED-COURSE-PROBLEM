#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int nodeLevel(int V, vector<int> adj[], int X) {
        int level[V] = {};
        vector<bool> visited(V, false);

        level[0] = 0;
        visited[0] = true;

        queue<int> q;
        q.push(0);

        while (!q.empty()) {
            int a = q.front();
            q.pop();
            for (auto s : adj[a]) {
                if (!visited[s]) {
                    level[s] = level[a] + 1;
                    if (s == X) {
                        return level[s];
                    }
                    visited[s] = true;
                    q.push(s);
                }
            }
        }
        return -1;
    }
};

int main() {
    int V = 6; // Number of vertices
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(5);

    int X = 4; // Node to find the level

    Solution obj;
    int result = obj.nodeLevel(V, adj, X);

    if (result != -1)
        cout << "Level of node " << X << " is: " << result << endl;
    else
        cout << "Node " << X << " is not present in the graph." << endl;

    return 0;
}