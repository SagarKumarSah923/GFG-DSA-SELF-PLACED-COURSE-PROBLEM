#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void convertToWave(int N, vector<int>& A) {
        int temp = 0;
        for (int i = 0; i < N - 1; i++) {
            if (i % 2 == 0) {
                if (A[i] < A[i + 1]) {
                    temp = A[i];
                    A[i] = A[i + 1];
                    A[i + 1] = temp;
                }
            } else {
                if (A[i] > A[i + 1]) {
                    temp = A[i];
                    A[i] = A[i + 1];
                    A[i + 1] = temp;
                }
            }
        }
    }
};

int main() {
    Solution sol;

    vector<int> A1 = {6, 9, 2, 5, 1, 4};
    int N1 = A1.size();
    sol.convertToWave(N1, A1);
    cout << "Wave converted array: ";
    for (int num : A1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> A2 = {1, 3, 4, 7};
    int N2 = A2.size();
    sol.convertToWave(N2, A2);
    cout << "Wave converted array: ";
    for (int num : A2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
