#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> snakePattern(vector<vector<int>>matrix){
        int n1=matrix.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i%2==0)
            {
                for(int j=0;j<n;j++){
                    ans_push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=n1;j>=0;j--)
                ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int> result=sol.snakePattern(matrix);
    for(int val : result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}