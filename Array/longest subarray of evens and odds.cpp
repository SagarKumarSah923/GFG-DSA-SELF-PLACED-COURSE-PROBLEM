#include <iostream>
using namespace std;

class Solution {
public:
    int even_odd(int key) {
        if (key % 2 == 0) {
            return 2;
        } else {
            return 1;
        }
    }

    int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    int maxEvenOdd(int arr[], int n) {
        int flag;
        int count;
        int res = 1;
        for (int i = 0; i < n - 1; i++) {
            flag = even_odd(arr[i]);
            count = 1;
            for (int j = i + 1; j < n; j++) {
                if (flag == 2) {
                    if (arr[j] % 2 != 0) {
                        count = count + 1;
                    } else {
                        break;
                    }
                }
                if (flag == 1) {
                    if (arr[j] % 2 == 0) {
                        count = count + 1;
                    } else {
                        break;
                    }
                }
                flag = even_odd(arr[j]);
                res = max(count, res);
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    int arr1[] = {10, 12, 14, 7, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Maximum even-odd subarray length: " << sol.maxEvenOdd(arr1, n1) << endl;

    int arr2[] = {7, 10, 13, 14};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Maximum even-odd subarray length: " << sol.maxEvenOdd(arr2, n2) << endl;

    int arr3[] = {10, 20, 30, 5, 10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Maximum even-odd subarray length: " << sol.maxEvenOdd(arr3, n3) << endl;

    return 0;
}
