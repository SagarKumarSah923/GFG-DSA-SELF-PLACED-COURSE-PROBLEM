#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> spirallyTraverse(vector<vector<int>> matrix,int r,int c){
        vector<int> v;
        int top=0;
        bottom=r-1;
        left=0;
        right=c-1;
        while(top<=bottom && left <=right){
            for(int i=left;i<=right;i++)
        v.push_back(matrix[top][i]); 
            top++;
        for(int i=top;i<bottom;i++)
          v_push_back(matrix[i][right]);
           right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)
        v_push_back(matrix[bottom][i]);
            bottom--;
        if(left<=right){
            for(int i=bottom;i>=top;i--)
        v_push_back(matrix[i][left]);
                left++;
        }
        }
        return v;
    }
}
int main(){
    Solution sol;
    vector<vector<int>> matrix={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int r=matrix.size();
    int c=matrix[0].size();
    vector<int> result=sol.spirallyTraverse(matrix,r,c);
    for(int val : result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}