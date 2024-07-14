// To approach first
//Iterative approach
//Recursive approach

#include<iostream>
using namespace std;
int main(){
    char str S1[]="ABCDEF";
    char str S2[]="ADE";

}
bool isSubSeq(string s1,string s2,int n,int m){
    int j=0;
    for(int i=0;i<n && j<m;i++){
        if(S1[i]==S2[j])
              j++;
    }
    return (j==m);
}

bool isSubSeq(string s1,string s2,int n,int m){
    if(m==0)
       return true;
    if(n==0)
       return false;
    if(S1[n-1]==S2[m-1])
           return isSubSeq(s1,s2,n-1,m-1);
        else
           return isSubSeq(s1,s2,n-1,m);
}
