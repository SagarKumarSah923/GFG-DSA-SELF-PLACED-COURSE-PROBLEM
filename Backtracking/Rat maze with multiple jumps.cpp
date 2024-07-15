#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPossible(int Node, int c, bool graph[101][101], int n, unordered_map<int, int>& color) {
        for (int i = 0; i < n; i++) {
            if (i != Node && graph[i][Node] && color[i] == c) {
                return false;
            }
        }
        return true;
    }

    bool helper(int Node, bool graph[101][101], int m, int n, unordered_map<int, int>& color) {
        if (Node == n) {
            return true;
        }

        for (int i = 1; i <= m; i++) {
            if (isPossible(Node, i, graph, n, color)) {
                color[Node] = i;
                if (helper(Node + 1, graph, m, n, color)) {
                    return true;
                }
                color[Node] = 0;
            }
        }

        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int n) {
        unordered_map<int, int> color;
        return helper(0, graph, m, n, color);
    }
};

int main() {
    Solution sol;

    bool graph1[101][101] = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0}
    };
    int m1 = 3; // Number of colors
    int n1 = 4; // Number of nodes

    if (sol.graphColoring(graph1, m1, n1)) {
        cout << "Graph can be colored using at most " << m1 << " colors." << endl;
    } else {
        cout << "Graph cannot be colored using " << m1 << " colors." << endl;
    }

    bool graph2[101][101] = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}
    };
    int m2 = 2; // Number of colors
    int n2 = 3; // Number of nodes

    if (sol.graphColoring(graph2, m2, n2)) {
        cout << "Graph can be colored using at most " << m2 << " colors." << endl;
    } else {
        cout << "Graph cannot be colored using " << m2 << " colors." << endl;
    }

    return 0;
}
