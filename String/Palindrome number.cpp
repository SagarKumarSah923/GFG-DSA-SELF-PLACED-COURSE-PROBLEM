//Naive Approach
#include<iostream>
using namespace std;
bool isPal(string &str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return(rev==str);
}
int main(){
    char str[]="ABCDCBA";
    return 0;
}

//Efficient Approach
bool isPal(string &str){
    int begin=0;
    int end=str.length()-1;
    while(begin<end){
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}