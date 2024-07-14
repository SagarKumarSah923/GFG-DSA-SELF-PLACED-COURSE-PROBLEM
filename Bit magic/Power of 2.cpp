#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPoweeofTwo(long long n){
        if(n==0)
           return false;
        while(n!=1){
            if(n%2!=0)
              return false;
            n=n/2;
        }
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       Solution obj;
       cout<<boolapha<<obj.isPoweeofTwo(n)<<endl;
    }
    return 0;
}