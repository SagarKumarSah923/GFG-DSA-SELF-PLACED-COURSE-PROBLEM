#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]) {
        int secondLargest = -1;
        int max1 = arr[0];
        int n = sizeOfArray;

        for (int i = 1; i < n; i++) {
            if (arr[i] > max1) {
                secondLargest = max1;
                max1 = arr[i];
            } else if (arr[i] != max1 && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        vector<int> result;
        result.push_back(max1);
        result.push_back(secondLargest);
        return result;
    }
};

int main() {
    Solution sol;

    int arr1[] = {10, 5, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> result1 = sol.largestAndSecondLargest(size1, arr1);
    cout << "Largest: " << result1[0] << ", Second Largest: " << result1[1] << endl;

    int arr2[] = {10, 10, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> result2 = sol.largestAndSecondLargest(size2, arr2);
    cout << "Largest: " << result2[0] << ", Second Largest: " << result2[1] << endl;

    int arr3[] = {5, 8, 6, 7};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    vector<int> result3 = sol.largestAndSecondLargest(size3, arr3);
    cout << "Largest: " << result3[0] << ", Second Largest: " << result3[1] << endl;

    return 0;
}
