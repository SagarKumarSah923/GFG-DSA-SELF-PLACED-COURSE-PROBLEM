#include <iostream>
using namespace std;

long long numOfWays(int N, int M) {
    const int MOD = 1000000007;
    if (N == 1 && M == 1) return 0;
    if (N == 1 || M == 1) return (N * (N - 1) % MOD + M * (M - 1) % MOD) % MOD;
    
    long long ans = 0;
    int row = 1, col = 1;
    
    while (row <= N) {
        while (col <= M) {
            ans = (ans + ((N - row) * M % MOD + M - col) % MOD) % MOD;
            
            if (col + 2 <= M && row + 1 <= N) ans = (ans - 1 + MOD) % MOD;
            if (col - 2 >= 1 && row + 1 <= N) ans = (ans - 1 + MOD) % MOD;
            if (row + 2 <= N && col + 1 <= M) ans = (ans - 1 + MOD) % MOD;
            if (row + 2 <= N && col - 1 >= 1) ans = (ans - 1 + MOD) % MOD;
            
            col++;
        }
        row++;
        col = 1;
    }
    
    return (ans * 2) % MOD;
}

int main() {
    int N = 3;
    int M = 2;
    
    long long ways = numOfWays(N, M);
    
    cout << "Number of ways to place a black and a white Knight: " << ways << endl;
    
    return 0;
}
