#include<iostream>
using namespace std;
int main(){
    String str="geeksforgeek";
    int count[26]={0};
    for(int=0;i<str.length();i++)
         count[str[i]-'a']++;
    for(int i=0;i<26;i++)
        if(count[i]>0)
           cout<<(char)(i+'a')<<" "<<count[i]<<endl;

}