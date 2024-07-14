#include<iostream>
using namespace std;
class Solution{
    public:
    int checkBits(int pattern,int arr[],int n){
        int count=0;
        for(int i=0;i<n;i++)
          if(pattern& arr[i]==pattern)
             count++;
        return count;
    }
    public:
    int maxAND(int arr[],int n){
        int res=0,count;
        for(int bit=31;bit>=0;bit--){
            count=checkBits|(1<<bit),arr,n);
            if(count>=2)
               res|=(1<<bit);
        }
        return res;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
            Solution obj;
            cout<<obj.maxAND(arr,n)<<endl;
    }
    return 0;
}
