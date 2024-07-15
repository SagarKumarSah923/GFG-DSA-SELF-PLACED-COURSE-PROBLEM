#include <iostream>
using namespace std;

const int N = 9; // Size of the Sudoku grid

class Solution 
{
public:
    // Function to check if placing 'k' at grid[i][j] is valid
    bool isValid(int grid[N][N], int k, int i, int j){
        // Check row and column
        for(int p = 0; p < N; p++){
            if(grid[i][p] == k) return false;
            if(grid[p][j] == k) return false;
        }
        
        // Check 3x3 subgrid
        int startRow = 3 * (i / 3);
        int startCol = 3 * (j / 3);
        for(int p = 0; p < 3; p++){
            for(int q = 0; q < 3; q++){
                if(grid[startRow + p][startCol + q] == k) return false;
            }
        }
        
        return true;
    }
    
    // Function to solve the Sudoku using backtracking
    bool SolveSudoku(int grid[N][N])  
    { 
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(grid[i][j] == 0){ // Find an empty cell
                    for(int k = 1; k <= 9; k++){
                        if(isValid(grid, k, i, j)){
                            grid[i][j] = k; // Place k if it's valid
                            if(SolveSudoku(grid)) // Recursively solve
                                return true;
                            else
                                grid[i][j] = 0; // Backtrack if solution not found
                        }
                    }
                    return false; // If no valid number found, backtrack
                }
            }
        }
        return true; // Sudoku solved
    }
    
    // Function to print the Sudoku grid
    void printGrid(int grid[N][N]) 
    {
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution sol;

    int grid[N][N] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 0, 0, 0, 6, 8},
        {0, 0, 0, 9, 0, 4, 0, 0, 5},
        {9, 6, 0, 0, 0, 0, 0, 0, 0},
        {0, 7, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    if (sol.SolveSudoku(grid)) {
        cout << "Sudoku solved successfully:\n";
        sol.printGrid(grid);
    } else {
        cout << "No solution exists for the given Sudoku.\n";
    }

    return 0;
}
