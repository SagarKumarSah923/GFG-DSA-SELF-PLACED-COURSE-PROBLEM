#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    void solve(string& str, int n, string& result, int k, int i){
        result = max(result, str);
        
        // base case
        if(i == n or k == 0){
            return;
        }
        
        /* 1. Find the largest char from i to n */
        char maxchar = str[i];
        for(int j=i+1; j<n; j++){
            maxchar = max(maxchar, str[j]);
        }
        
        /* 2. Do swapping with all str[i] and str[j] pairs such that str[j] == maxchar */
        if(maxchar > str[i]){
            for(int j=i+1; j<n; j++){
                if(str[j] == maxchar){
                    swap(str[i], str[j]);
                    solve(str, n, result, k-1, i+1);
                    swap(str[i], str[j]);
                }
            }
        }
        else{
            solve(str, n, result, k, i+1);
        }
    }
    
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
        int n = str.size();
        string result = str;
        
        solve(str, n, result, k, 0);
        
        return result;
    }
};

int main() {
    Solution sol;

    string str = "129814999";
    int k = 4;

    string maxNum = sol.findMaximumNum(str, k);
    
    cout << "The largest number after " << k << " swaps is: " << maxNum << endl;

    return 0;
}
