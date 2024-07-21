#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int countOccurence(std::vector<int>& arr, int n, int k) {
        std::unordered_map<int, int> freqs;
        for (int num : arr) {
            freqs[num]++;
        }
        
        int c = 0;
        for (const auto& pair : freqs) {
            if (pair.second > n / k) {
                c++;
            }
        }
        return c;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {3, 1, 2, 2, 1, 2, 3, 3}; // Example array
    int n = arr.size();
    int k = 4; // Example value for k
    int result = solution.countOccurence(arr, n, k);
    
    std::cout << "Number of elements occurring more than n/k times: " << result << std::endl;
    
    return 0;
}
