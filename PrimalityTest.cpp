#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPrime(int N) {
        if (N <= 1) return false;
        if (N == 2) return true;  // 2 is a prime number

        int sqrtN = sqrt(N);
        for (int i = 2; i <= sqrtN; i++) {
            if (N % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    bool result = solution.isPrime(N);
    if (result) {
        cout << N << " is a prime number." << endl;
    } else {
        cout << N << " is not a prime number." << endl;
    }
    
    return 0;
}
