#include<iostream>
using namespace std;
class Solution{
    public:
    int posOFrightMostdiffbit(int m,int n){
        int xorResult=m^n;
        if(xorResult==0){
            return -1;
        }
        int postion=1;
        while((xorResult & 1)==0){
            xorResult >>=1;
            postion++;
        }
        return postion;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        Solution obj;
        cout<<obj.posOFrightMostdiffbit(m,n)<<endl;
    }
    return 0;
}