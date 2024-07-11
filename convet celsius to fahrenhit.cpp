#include<iostream>
using namespace std;
class Solution{
    public:
    double cTof(int C){
        double F=(C*9.0/5.0)+32;
        return F;
    }
};
int main(){
    Solution obj;
    int celsius;
    cout<<"Enter the tempreature in Celsius:";
    cin>>celsius;
    double fahrenheit=obj.cTof(celsius);
    cout<<"Celsius: "<<celsius<<"\n";
    cout<<"fahrenheit: "<<fahrenheit<<"\n";
    return 0;
}

