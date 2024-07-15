#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) {
        vector<int> greater, small;
        small.push_back(A[0]);
        for (int i = 1; i < N; i++) {
            small.push_back(min(A[i], small.back()));
        }
        greater.push_back(A[N - 1]);
        for (int i = N - 2; i >= 0; i--) {
            greater.push_back(max(A[i], greater.back()));
        }
        reverse(greater.begin(), greater.end());

        int ans = 0;
        int i = 0, j = 0;
        while (i < N && j < N) {
            if (small[i] <= greater[j]) {
                ans = max(ans, j - i);
                j++;
            } else {
                i++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    int arr1[] = {1, 10, 5, 2, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Maximum index difference: " << sol.maxIndexDiff(arr1, n1) << endl;

    int arr2[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Maximum index difference: " << sol.maxIndexDiff(arr2, n2) << endl;

    int arr3[] = {1, 2, 3, 4, 5, 6};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Maximum index difference: " << sol.maxIndexDiff(arr3, n3) << endl;

    return 0;
}
