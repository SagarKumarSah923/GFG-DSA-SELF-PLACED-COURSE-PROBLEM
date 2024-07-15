#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxOccured(int L[], int R[], int n, int maxx) {
        vector<int> arr(1000000, 0);
        int sum = 0, max = 0, index = 0;

        for (int i = 0; i < n; i++) {
            arr[L[i]]++;
            arr[R[i] + 1]--;
        }

        for (int i = 0; i < 1000000; i++) {
            sum += arr[i];
            if (sum > max) {
                max = sum;
                index = i;
            }
        }

        return index;
    }
};

int main() {
    Solution sol;

    int L1[] = {1, 4, 3, 1};
    int R1[] = {15, 8, 5, 4};
    int n1 = sizeof(L1) / sizeof(L1[0]);
    int maxx1 = *max_element(R1, R1 + n1);
    cout << "Maximum occurred integer: " << sol.maxOccured(L1, R1, n1, maxx1) << endl;

    int L2[] = {1, 2, 3};
    int R2[] = {3, 5, 7};
    int n2 = sizeof(L2) / sizeof(L2[0]);
    int maxx2 = *max_element(R2, R2 + n2);
    cout << "Maximum occurred integer: " << sol.maxOccured(L2, R2, n2, maxx2) << endl;

    int L3[] = {2, 1, 3};
    int R3[] = {5, 3, 9};
    int n3 = sizeof(L3) / sizeof(L3[0]);
    int maxx3 = *max_element(R3, R3 + n3);
    cout << "Maximum occurred integer: " << sol.maxOccured(L3, R3, n3, maxx3) << endl;

    return 0;
}
