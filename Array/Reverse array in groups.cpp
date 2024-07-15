#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseInGroups(vector<int>& arr, int n, int k) {
        int i = 0;
        
        while (i < n) {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
            i += k;
        }
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {1, 2, 3, 4, 5};
    int n1 = arr1.size();
    int k1 = 3;
    sol.reverseInGroups(arr1, n1, k1);
    cout << "Reversed array in groups: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2 = {10, 20, 30, 40, 50, 60};
    int n2 = arr2.size();
    int k2 = 2;
    sol.reverseInGroups(arr2, n2, k2);
    cout << "Reversed array in groups: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
