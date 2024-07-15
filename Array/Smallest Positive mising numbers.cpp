#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& arr, int n) {
        int ptr = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                ptr = 1;
                break;
            }
        }
        
        if (ptr == 0) {
            return 1;
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0 || arr[i] > n) {
                arr[i] = 1;
            }
        }
        
        for (int i = 0; i < n; i++) {
            arr[(arr[i] - 1) % n] += n;
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] <= n) {
                return (i + 1);
            }
        }
        
        return (n + 1);
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {3, 4, -1, 1};
    int n1 = arr1.size();
    cout << "Missing number: " << sol.missingNumber(arr1, n1) << endl;

    vector<int> arr2 = {1, 2, 0};
    int n2 = arr2.size();
    cout << "Missing number: " << sol.missingNumber(arr2, n2) << endl;

    vector<int> arr3 = {7, 8, 9, 11, 12};
    int n3 = arr3.size();
    cout << "Missing number: " << sol.missingNumber(arr3, n3) << endl;

    return 0;
}
