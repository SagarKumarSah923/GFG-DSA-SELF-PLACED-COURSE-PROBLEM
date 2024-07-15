#include <iostream>
using namespace std;

class Solution {
public:
    bool checkRotatedAndSorted(int arr[], int n) {
        int cup = 0, cdn = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                cup++;
            }
            if (arr[i] < arr[i - 1]) {
                cdn++;
            }
        }
        if (((cup == n - 2) && (cdn == 1) && (arr[0] > arr[n - 1])) ||
            ((cdn == n - 2) && (cup == 1) && (arr[0] < arr[n - 1]))) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution sol;

    int arr1[] = {3, 4, 5, 1, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << (sol.checkRotatedAndSorted(arr1, n1) ? "True" : "False") << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << (sol.checkRotatedAndSorted(arr2, n2) ? "True" : "False") << endl;

    int arr3[] = {2, 3, 4, 5, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << (sol.checkRotatedAndSorted(arr3, n3) ? "True" : "False") << endl;

    return 0;
}
