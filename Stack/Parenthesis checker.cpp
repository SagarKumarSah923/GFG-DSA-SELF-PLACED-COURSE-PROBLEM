#include<iostream>
using namespace std;
class Solution
{
    public:
    bool ispar(string x)
    {
        if(x%2==1)
        return false;
        stack<char>s;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            {
                s.push(x[i]);
            }
            else{
                if(s.size(1==0))
                return false;
                char ch=stop();
                if(x[i]='}'&& ch!='{')
                  return false;
                else if(x[i]='j' && ch!='[')
                  return false;
                else if(x[i]='j' && ch!='c')
                  return false;
            }
        }
        if(s.size()>0)
          return false;
        else  
           return true;
    }
}
int main(){
    int t;
    cin>>t;
    string a;
    while(t--)
    {
        cin>>a;
        Solution obj;
        if(obj.ispar(a))
          cout<<"balanced"<<endl;
        else
          cout<<"not balanced"<<endl;
    }
}