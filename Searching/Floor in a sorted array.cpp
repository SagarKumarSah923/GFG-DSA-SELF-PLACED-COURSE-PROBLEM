#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFloor(vector<long long>& arr, long long n, long long x) {
        long long int low = 0, high = n - 1;
        if (arr[low] > x) {
            return -1;
        }
        if (arr[high] < x) {
            return n - 1;
        }
        int ans = -1;
        while (low <= high) {
            int m = (low + high) / 2;
            if (arr[m] > x) {
                high = m - 1;
            } else {
                ans = m;
                low = m + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<long long> arr = {1, 2, 4, 6, 10, 12, 14}; // Example array
    long long n = arr.size();
    long long x = 5; // Example value for x
    int result = solution.findFloor(arr, n, x);
    
   
