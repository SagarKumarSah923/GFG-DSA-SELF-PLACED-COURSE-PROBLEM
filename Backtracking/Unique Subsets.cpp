#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

class Solution {
public:
    void findSubsets(vector<int>& arr, int index, vector<int>& current, vector<vector<int>>& result) {
        result.push_back(current);
        for (int i = index; i < arr.size(); ++i) {
            if (i > index && arr[i] == arr[i - 1]) continue; // Skip duplicates
            current.push_back(arr[i]);
            findSubsets(arr, i + 1, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> AllSubsets(vector<int> arr, int n) {
        vector<vector<int>> result;
        vector<int> current;
        sort(arr.begin(), arr.end()); // Sort to handle duplicates
        findSubsets(arr, 0, current, result);
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {1, 2, 2};
    vector<vector<int>> subsets = sol.AllSubsets(arr, arr.size());

    cout << "All subsets of {1, 2, 2} are:\n";
    for (const auto& subset : subsets) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
