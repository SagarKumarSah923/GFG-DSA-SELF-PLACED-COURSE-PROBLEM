#include<iostream>
using namespace std;
class Solution{
    public:
    int countBitsfloip(int a,int b){
        int count=0;
        while(a||b){
            int is_a=a&1;
            int is_b=b&1;
            if(is_a!is_b)
                count++;
            a=a>>1;
            b=b>>1;
        }
        return count;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.countBitsfloip(a,b)<<endl;
    }
    return 0;
}