#include<iostream>
using namespace std;
class Solution{
    public:
    bool isSparse(int n){
        int res=n &(n>>1);
        if(res==0)
           return true;
        return false;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        cout<<boolapha<<obj.isSparse(n)<<endl;
    }
    return 0;
}