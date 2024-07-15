#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void arrange(vector<int>& arr, int n) {
        for (int i = 0; i < n; i++) {
            arr.push_back(arr[arr[i]]);
        }
        arr.erase(arr.begin(), arr.begin() + n);
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {1, 3, 0, 2};
    int n1 = arr1.size();
    sol.arrange(arr1, n1);
    cout << "Modified array: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2 = {4, 0, 2, 1, 3};
    int n2 = arr2.size();
    sol.arrange(arr2, n2);
    cout << "Modified array: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
