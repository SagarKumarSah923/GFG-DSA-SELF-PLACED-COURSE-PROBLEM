#include<isotream>
using namespace std;
class Solution{
    public:
    int greyConvert(int n){
        return n^(n>>1);
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.greyConvert(n)<<endl;

    }
    return 0;
}