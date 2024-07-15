#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    void solve(vector<int>& A, int B, vector<vector<int>>& ans, vector<int>& dummy, int prev) {
        if (prev != -1) dummy.push_back(prev);
        for (auto p : A) {
            if (p >= prev) {
                if (B > p) {
                    solve(A, B - p, ans, dummy, p);
                } else if (B == p) {
                    dummy.push_back(p);
                    ans.push_back(dummy);
                    return;
                }
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& A, int B) {
        set<int> se;
        for (auto p : A) se.insert(p);

        vector<int> nA;
        for (auto p : se) nA.push_back(p);

        vector<vector<int>> ans;
        vector<int> dummy;

        solve(nA, B, ans, dummy, -1);
        return ans;
    }
};

void printCombinations(vector<vector<int>>& combinations) {
    for (auto& combo : combinations) {
        cout << "[";
        for (int i = 0; i < combo.size(); ++i) {
            cout << combo[i];
            if (i != combo.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
}

int main() {
    Solution sol;

    vector<int> A1 = {2, 3, 6, 7};
    int B1 = 7;
    vector<vector<int>> result1 = sol.combinationSum(A1, B1);
    cout << "Combination sums for B = " << B1 << ":" << endl;
    printCombinations(result1);

    vector<int> A2 = {2, 3, 5};
    int B2 = 8;
    vector<vector<int>> result2 = sol.combinationSum(A2, B2);
    cout << "Combination sums for B = " << B2 << ":" << endl;
    printCombinations(result2);

    return 0;
}
