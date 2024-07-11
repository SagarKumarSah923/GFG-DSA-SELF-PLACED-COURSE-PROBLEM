#include<iostream>
using namespace std;
class Solution{
    public:
    int absolute(int I){
        if(I>=0){
            return I;
        else{
            return -I;
        }
        }
    }
}
int main(){
    int I;
    cin>>I;
    Solution ob;
    cout<<ob.absolute(I)<<endl;
}