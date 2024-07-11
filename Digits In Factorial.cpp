#include<iostream>
#include<math>
using namespace std;
class solution{
    public:
    int digitsInfactorail(int N){
        if(N<0)
           return 0;
        if(N<=1)
           return 1;
        else{
            double d=0;
            for(int i=2;i<=N;i++)
              d+=log10(i);
            return floor(d)+1;
        }
    }

};
int main(){
    int n;
    solution obj;
    cout<<"Enter the number to find the number of digits in its factorail:";
    cin>>n;
    int result=obj.digitsInfactorail(n);
    cout<<"Number of digits in factorial of"<<n<<"is:"<<result<<endl;
    return 0;
}