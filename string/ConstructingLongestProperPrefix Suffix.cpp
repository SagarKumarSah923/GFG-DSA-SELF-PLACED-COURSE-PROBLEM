#include<iostream>
using namespace std;
int longProperPreSuff(str n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
    for(int i=0;i<len;i++){
        if(str[i]!=str[n-len+i])
                flag=false;
        if(flag==true)
           return len;
    }
    return 0;
    }
void fillPs(str,lps[]){
    for(int i=0;i<str.length();i++)
          lps[i]=longProperPreSuff(str,i+1);
}