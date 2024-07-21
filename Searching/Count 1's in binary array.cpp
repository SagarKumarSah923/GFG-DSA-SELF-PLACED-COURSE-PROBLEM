#include <iostream>
#include <vector>

class Solution {
public:
    int countOnes(std::vector<int>& arr, int N) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            if (arr[i] == 1) {
                count += 1;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {1, 0, 1, 1, 0, 1, 1}; // Example array
    int N = arr.size();
    int result = solution.countOnes(arr, N);
    
    std::cout << "Number of ones in the array: " << result << std::endl;
    
    return 0;
}
