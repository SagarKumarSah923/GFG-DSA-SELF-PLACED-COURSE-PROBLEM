#include <iostream>
#include <vector>

class Solution {
public:
    int peakElement(std::vector<int>& arr, int n) {
        int start = 0, end = n - 1, mid;
        while (start <= end) {
            mid = (start + end) / 2;
            int prev = mid - 1 >= 0 ? mid - 1 : 0;
            int next = mid + 1 < n ? mid + 1 : n - 1;
            if (arr[mid] >= arr[prev] && arr[mid] >= arr[next]) return mid;
            else if (arr[mid] < arr[next]) start = mid + 1;
            else end = mid - 1;
        }
        return 0;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {1, 3, 20, 4, 1, 0}; // Example array
    int n = arr.size();
    int result = solution.peakElement(arr, n);
    
    std::cout << "Peak element index is: " << result << std::endl;
    
    return 0;
}
