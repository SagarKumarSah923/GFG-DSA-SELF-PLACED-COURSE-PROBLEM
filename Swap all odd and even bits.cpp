#include<iostream>
using namespace std;
class Solution{
    public:
    unsigned int swapBits(unsigned int n){
        unsigned int even_bits=0xAAAAAA;
        unsigned int odd_bits=n&0x555555;
        even_bits=even_bits>>1;
        odd_bits=odd_bits<<1;
        return (even_bits|odd_bits);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned int n;
        cin>>n;
        Solution obj;
        cout<<obj.swapBits(n)<<endl; 
    }
    return 0;
}