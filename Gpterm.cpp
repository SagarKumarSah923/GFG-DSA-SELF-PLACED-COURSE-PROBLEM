#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double termOfGP(double A, double B, int N) {
        return A * pow(B / A, N - 1);
    }
};

int main() {
    Solution solution;
    
    double A, B;
    int N;
    cout << "Enter the first term (A): ";
    cin >> A;
    cout << "Enter the second term (B): ";
    cin >> B;
    cout << "Enter the term number (N): ";
    cin >> N;
    
    double result = solution.termOfGP(A, B, N);
    cout << "The " << N << "th term of the GP is: " << result << endl;
    
    return 0;
}
