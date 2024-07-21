#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxWater(std::vector<int>& height, int n) {
        int maximum = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (height[i] < height[j]) {
                maximum = std::max(maximum, (j - i - 1) * height[i]);
                i++;
            } else if (height[j] < height[i]) {
                maximum = std::max(maximum, (j - i - 1) * height[j]);
                j--;
            } else {
                maximum = std::max(maximum, (j - i - 1) * height[i]);
                i++;
                j--;
            }
        }
        return maximum;
    }
};

int main() {
    Solution solution;
    std::vector<int> height = {1, 3, 2, 4, 5, 2, 1}; // Example heights
    int n = height.size();
    int result = solution.maxWater(height, n);
    
    std::cout << "Maximum water that can be trapped is: " << result << std::endl;
    
    return 0;
}
