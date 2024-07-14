#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        void transpose(vector<vector<int>> & matrix,int n){
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    swap(matrix[i][j],matrix[j,i]);
                }
            }
        }
};
int main(){
    int n=matrix.size();
    sol.transpose(matrix,n);
    for(const auto& row : matrix){
        for(int val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;

}