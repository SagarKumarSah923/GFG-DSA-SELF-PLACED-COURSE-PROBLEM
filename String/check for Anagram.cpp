//Naive Approach
//Efficient Approach
#include<isotream>
using namespace std;
int main(){
    char str1[]="Listen";
    char str2[]="Silent";

}
bool areAnagram(String &s1,String &s2){
    if(s1.length()!=s2.length())
        return false;
    sort(s1.begin(),s2.end());
    sort(s2.begin(),s2.end());
    return(s1==s2);
}

Const int CHAR=256;
bool areAnagram(string &s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    int count[char]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]++;

    }
    for(int i=0;i<CHAR;i++)
         if(Count[i]!=0)
           return false;
}
