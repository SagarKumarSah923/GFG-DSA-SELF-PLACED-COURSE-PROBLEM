#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArraySum(vector<int>& arr, int size) {
        // Check if there is any non-negative number in the array
        bool hasNonNegative = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] >= 0) {
                hasNonNegative = true;
                break;
            }
        }

        if (hasNonNegative) {
            int max_so_far = 0, max_ending_here = 0;
            for (int i = 0; i < size; i++) {
                max_ending_here = max_ending_here + arr[i];
                if (max_ending_here < 0) {
                    max_ending_here = 0;
                }
                if (max_so_far < max_ending_here) {
                    max_so_far = max_ending_here;
                }
            }
            return max_so_far;
        } else {
            return *max_element(arr.begin(), arr.end());
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {1, 2, 3, -2, 5};
    int size1 = arr1.size();
    cout << "Maximum subarray sum: " << sol.maxSubArraySum(arr1, size1) << endl;

    vector<int> arr2 = {-1, -2, -3, -4};
    int size2 = arr2.size();
    cout << "Maximum subarray sum: " << sol.maxSubArraySum(arr2, size2) << endl;

    return 0;
}
