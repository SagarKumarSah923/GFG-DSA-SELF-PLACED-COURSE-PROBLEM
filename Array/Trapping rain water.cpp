#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long trappingWater(int arr[], int n) {
        vector<int> left(n), right(n);
        
        // Compute left max heights
        for (int i = 0; i < n; i++) {
            if (i == 0)
                left[i] = arr[0];
            else
                left[i] = max(arr[i], left[i - 1]);
        }
        
        // Compute right max heights
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1)
                right[i] = arr[n - 1];
            else
                right[i] = max(arr[i], right[i + 1]);
        }
        
        // Calculate trapped water
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(left[i], right[i]) - arr[i];
        }
        
        return ans;
    }
};

int main() {
    Solution sol;

    int arr1[] = {3, 0, 0, 2, 0, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Trapped water: " << sol.trappingWater(arr1, n1) << endl;

    int arr2[] = {7, 4, 0, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Trapped water: " << sol.trappingWater(arr2, n2) << endl;

    int arr3[] = {6, 9, 9};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Trapped water: " << sol.trappingWater(arr3, n3) << endl;

    return 0;
}
