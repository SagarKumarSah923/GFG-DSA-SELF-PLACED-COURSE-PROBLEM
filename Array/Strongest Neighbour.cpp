#include <iostream>
#include <vector>
using namespace std;

void maximumAdjacent(int sizeOfArray, vector<int>& arr) {
    for (int i = 0; i < sizeOfArray - 1; i++) {
        cout << max(arr[i], arr[i + 1]) << " ";
    }
}

int main() {
    int sizeOfArray1 = 5;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    cout << "Maximum adjacent pairs: ";
    maximumAdjacent(sizeOfArray1, arr1);
    cout << endl;

    int sizeOfArray2 = 4;
    vector<int> arr2 = {5, 5, 5, 5};
    cout << "Maximum adjacent pairs: ";
   
