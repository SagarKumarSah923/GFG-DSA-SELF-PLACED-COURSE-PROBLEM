#include<iostream>
using namespace std;
bool are rotations(string s1,string s2){
if(s1.length() !=s2.length()){
return false;
}
string temp=s1+s2;
return temp.find(s2) !=string::npos;
}
int main(){
string s1="ABCD";
string s2="CDAB";
cout<<arerotations(s1,s2)<<endl;
return 0;
