#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{   
public:
    void booleanMatrix(vector<vector<int>>& ma)
    {
        int r = ma.size();
        int c = ma[0].size();
        unordered_map<int, int> m, m1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (ma[i][j] == 1)
                {
                    m[i] = 1;
                    m1[j] = 1;
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (m.find(i) != m.end() || m1.find(j) != m1.end())
                    ma[i][j] = 1;
            }
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    
    Solution solution;
    solution.booleanMatrix(matrix);
    
    cout << "Transformed Matrix: " << endl;
    for (const auto& row : matrix)
    {
        for (const auto& elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    
    return 0;
}
