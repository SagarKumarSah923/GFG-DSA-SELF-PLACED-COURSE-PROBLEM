#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int minAdjDiff(int arr[], int n) {
        int min_dff = abs(arr[0] - arr[1]);
        for (int i = 1; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) < min_dff) {
                min_dff = abs(arr[i] - arr[i + 1]);
            }
        }
        if (min_dff > abs(arr[0] - arr[n - 1])) {
            min_dff = abs(arr[0] - arr[n - 1]);
        }
        return min_dff;
    }
};

int main() {
    Solution sol;

    int arr1[] = {8, -8, 9, -9, 10, -11, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Minimum adjacent difference: " << sol.minAdjDiff(arr1, n1) << endl;

    int arr2[] = {10, -3, -4, 7, 6, 5, -4, -1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Minimum adjacent difference: " << sol.minAdjDiff(arr2, n2) << endl;

    int arr3[] = {1, 2, 3, 4};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Minimum adjacent difference: " << sol.minAdjDiff(arr3, n3) << endl;

    return 0;
}
