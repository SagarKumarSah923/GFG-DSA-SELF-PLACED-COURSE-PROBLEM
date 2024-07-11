#include<iostream>
using namespace std;
class Solution{
    public:
    long long factorial(int N){
        if(N>1)
            return N*factorial(N-1);
            else
               return 1;
        }
    };
int main(){
    Solution obj;
    int num;
    cout<<"Enter a number to find its factorial:";
    cin>>num;
    long long result=obj.factorial(num);
    cout<<"factorial of"<<num<<"is:"<<result<<endl;
    return 0;
}