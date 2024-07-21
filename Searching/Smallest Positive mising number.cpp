#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& arr, int n) {
        int ptr = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 1) {
                ptr = 1;
                break;
            }
        }
        if (ptr == 0) {
            return 1;
        }
        for (int i = 0; i < n; ++i) {
            if (arr[i] <= 0 || arr[i] > n) {
                arr[i] = 1;
            }
        }
        for (int i = 0; i < n; ++i) {
            arr[(arr[i] - 1) % n] += n;
        }
        for (int i = 0; i < n; ++i) {
            if (arr[i] <= n) {
                return i + 1;
            }
        }
        return n + 1;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {3, 4, -1, 1}; // Example array
    int n = arr.size();
    int result = solution.missingNumber(arr, n);
    
    std::cout << "Smallest missing positive number is: " << result << std::endl;
    
    return 0;
}
