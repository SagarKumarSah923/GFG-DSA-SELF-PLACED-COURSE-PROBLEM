#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxStep(std::vector<int>& a, int n) {
        std::vector<int> all_steps;
        int steps = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i - 1] < a[i]) {
                steps = std::max(steps, 1);
                if (i >= 2) {
                    if (a[i - 2] < a[i - 1]) {
                        steps += 1;
                    }
                }
            } else {
                steps = 0;
            }
            all_steps.push_back(steps);
        }
        if (!all_steps.empty()) {
            return *std::max_element(all_steps.begin(), all_steps.end());
        } else {
            return 0;
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> a = {1, 2, 2, 4, 5, 3, 7, 8}; // Example array
    int n = a.size();
    int result = solution.maxStep(a, n);
    
    std::cout << "Maximum steps of increasing elements: " << result << std::endl;
    
    return 0;
}
