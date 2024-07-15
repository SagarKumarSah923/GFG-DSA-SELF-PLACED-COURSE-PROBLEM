#include <iostream>
#include <vector>
#include <cmath> // for math.floor equivalent
using namespace std;

class Solution {
public:
    vector<int> rearrange(vector<int>& arr, int n) {
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                arr.push_back(arr[n - 1 - i]);
                arr.push_back(arr[i]);
            }
        } else {
            for (int i = 0; i < n / 2; i++) {
                arr.push_back(arr[n - 1 - i]);
                arr.push_back(arr[i]);
            }
            arr.push_back(arr[static_cast<int>(floor(n / 2))]);
        }
        arr.erase(arr.begin(), arr.begin() + n);
        return arr;
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {1, 3, 0, 2};
    int n1 = arr1.size();
    vector<int> result1 = sol.rearrange(arr1, n1);
    cout << "Modified array: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2 = {4, 0, 2, 1, 3};
    int n2 = arr2.size();
    vector<int> result2 = sol.rearrange(arr2, n2);
    cout << "Modified array: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
