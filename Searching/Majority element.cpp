#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& A, int N) {
        std::unordered_map<int, int> freqs;
        for (int num : A) {
            freqs[num]++;
        }
        for (auto& pair : freqs) {
            if (pair.second > N / 2) {
                return pair.first;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    std::vector<int> A = {2, 2, 1, 1, 1, 2, 2}; // Example array
    int N = A.size();
    int result = solution.majorityElement(A, N);
    
    if (result != -1) {
        std::cout << "Majority element is: " << result << std::endl;
    } else {
        std::cout << "No majority element found" << std::endl;
    }

    return 0;
}
