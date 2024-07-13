#include <iostream>
using namespace std;

class Solution {
public:
    long long sumUnderModulo(long long a, long long b) {
        // Define the modulo constant
        int M = 1000000007;
        
        // Calculate a and b under modulo M
        a = a % M;
        b = b % M;
        
        // Return the sum under modulo M
        return (a + b) % M;
    }
};

int main() {
    Solution solution;
    
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    long long result = solution.sumUnderModulo(a, b);
    cout << "The sum under modulo is: " << result << endl;
    
    return 0;
}
