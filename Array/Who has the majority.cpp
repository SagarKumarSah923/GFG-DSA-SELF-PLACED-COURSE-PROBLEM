#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityWins(int arr[], int n, int x, int y) {
        unordered_map<int, int> counts;
        
        // Count occurrences of each element in arr
        for (int i = 0; i < n; i++) {
            counts[arr[i]]++;
        }
        
        // Compare counts of x and y
        if (counts[x] > counts[y]) {
            return x;
        } else if (counts[x] < counts[y]) {
            return y;
        } else {
            return min(x, y);
        }
    }
};

int main() {
    Solution sol;

    int arr1[] = {1, 2, 2, 3, 2, 4, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int x1 = 2, y1 = 3;
    cout << "Majority element: " << sol.majorityWins(arr1, n1, x1, y1) << endl;

    int arr2[] = {5, 5, 5, 5, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int x2 = 5, y2 = 5;
    cout << "Majority element: " << sol.majorityWins(arr2, n2, x2, y2) << endl;

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int x3 = 3, y3 = 3;
    cout << "Majority element: " << sol.majorityWins(arr3, n3, x3, y3) << endl;

    return 0;
}
