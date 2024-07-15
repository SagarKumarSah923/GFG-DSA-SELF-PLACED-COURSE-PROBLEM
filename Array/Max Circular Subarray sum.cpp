#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // Function to find the maximum sum of a non-circular subarray
    int totalsum(int arr[], int n)
    {
        int res = arr[0];
        int maxend = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxend = max(maxend + arr[i], arr[i]);
            res = max(res, maxend);
        }
        return res;
    }
    
    // Function to find the maximum sum of a circular subarray
    int circularSubarraySum(int arr[], int num)
    {
        int total = totalsum(arr, num);
        if (total < 0)
            return total;
        
        int sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum = sum + arr[i];
            arr[i] = -arr[i]; // Inverting the elements of the array
        }
        int max_cir = sum + totalsum(arr, num);
        return max(max_cir, total);
    }
};

int main()
{
    Solution sol;
    
    int arr1[] = {8, -8, 9, -9, 10, -11, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Maximum circular subarray sum: " << sol.circularSubarraySum(arr1, n1) << endl;
    
    int arr2[] = {10, -3, -4, 7, 6, 5, -4, -1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Maximum circular subarray sum: " << sol.circularSubarraySum(arr2, n2) << endl;
    
    int arr3[] = {-1, -2, -3, -4};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Maximum circular subarray sum: " << sol.circularSubarraySum(arr3, n3) << endl;

    return 0;
}
