#include<iostream>
using namespace std;
class Solution{
    public:
      int RecursivePower(int n,int p){
        if(y==0)
        return 1;
    else if(y%2==0)
        return RecursivePower(x,y/2)*RecursivePower(x,y/2);
    else
        return x * RecursivePower(x,y/2)*RecursivePower(x,y/2);
      }
};
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,p;
        cin>>n>>p;
        Solution obj;
        cout<<pbj.RecursivePower(n,p)<<endl;
    }
    return 0;
}