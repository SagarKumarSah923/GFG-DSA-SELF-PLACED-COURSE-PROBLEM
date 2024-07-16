#include <iostream>
using namespace std;

class Solution
{
    public:
    long binarySubstring(int n, string a)
    {
        int ones = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == '1')
                ones++;
        }
        return ones * (ones-1) / 2;
    }
};

int main()
{
    Solution sol;
    int n;
    string a;
    
    cout << "Enter the length of the binary string: ";
    cin >> n;
    
    cout << "Enter the binary string: ";
    cin >> a;
    
    long result = sol.binarySubstring(n, a);
    
    cout << "The number of substrings that start and end with 1 is: " << result << endl;
    
    return 0;
}
