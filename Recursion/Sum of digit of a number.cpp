#include<iostream>
using namespace std;
class Solution{
    public:
    int sumOfDigits(int n){
        if(n<10)
           return n;
        else
           return sumOfDigits(n/10)+n%10;
    }
};
int main(){
    Solution solution;
    cout<<solution.sumOfDigits(12345)<<endl;
    retunr 0;
}