#include <iostream>
using namespace std;

// User function Template for C++

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n == 0 || n == 1)
            return false;
         
        for(int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int exactly3Divisors(int n)
    {
        int count = 0;
        for(int i = 2; i * i <= n; i++)
        {
            if(isPrime(i))
            {
                if(i * i <= n)
                    count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = solution.exactly3Divisors(n);
    cout << "The count of numbers with exactly 3 divisors is: " << result << endl;
    
    return 0;
}
