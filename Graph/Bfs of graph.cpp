#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    vector<int> bfsOfGraph(int n, vector<int> g[])
    {
        vector<int> ans;
        int visited[n] = {0};

        queue<int> q;
        int s = 0;
        if (visited[s] == 0)
        {
            ans.push_back(s);
            q.push(s);
            visited[s] = 1;
        }

        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            if (visited[u] == 0)
            {
                ans.push_back(u);
            }
            visited[u] = 1;
            for (auto x : g[u])
            {
                if (!visited[x])
                {
                    q.push(x);
                }
            }
        }
        return ans;
    }
};

int main()
{
    int n = 5; // Number of vertices
    vector<int> g[n];
    g[0].push_back(1);
    g[0].push_back(2);
    g[1].push_back(3);
    g[1].push_back(4);

    Solution obj;
    vector<int> result = obj.bfsOfGraph(n, g);

    cout << "BFS Traversal of the graph: ";
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}