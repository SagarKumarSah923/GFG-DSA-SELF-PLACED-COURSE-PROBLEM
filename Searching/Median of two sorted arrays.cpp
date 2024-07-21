#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int findMedianSortedArrays(std::vector<int>& arr1, int N, std::vector<int>& arr2, int M) {
        std::vector<int> ar = arr1;
        ar.insert(ar.end(), arr2.begin(), arr2.end());
        std::sort(ar.begin(), ar.end());
        
        if ((N + M) % 2 == 0) {
            int a = ar[((N + M) / 2) - 1];
            int b = ar[((N + M) / 2)];
            return std::floor((a + b) / 2.0);
        } else {
            return ar[((N + M + 1) / 2) - 1];
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> arr1 = {1, 3}; // Example array 1
    std::vector<int> arr2 = {2}; // Example array 2
    int N = arr1.size();
    int M = arr2.size();
    int result = solution.findMedianSortedArrays(arr1, N, arr2, M);
    
    std::cout << "Median of the sorted arrays is: " << result << std::endl;
    
    return 0;
}
