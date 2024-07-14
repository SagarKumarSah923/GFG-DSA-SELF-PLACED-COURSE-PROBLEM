#include<iostream>
using namespace std;
class Solution{
    public:
    unsigned int getFirstSetBit(int n){
        int b=-n;
        int c=n&b;
        if(c==0)
          return 0;
        return log2(c)+1;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.getFirstSetBit(n)<<endl;
    }
    return 0;
}