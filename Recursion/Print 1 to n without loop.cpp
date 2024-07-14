#include<iostream>
using namespace std;
class Solution{
    public:
    void printNos(int N){
        if(N<=0){
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
    }
};
int main(){
    Solution solution;
    solution.printNos(5);
    return 0;
}