#include <iostream>
using namespace std;

class Solution {
public:
    int multiplicationUnderModulo(long long a, long long b) {
        int M = 1000000007;
        a = a % M;
        b = b % M;
        return (a * b) % M;
    }
};

int main() {
    Solution solution;
    
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int result = solution.multiplicationUnderModulo(a, b);
    cout << "The multiplication under modulo is: " << result << endl;
    
    return 0;
}
