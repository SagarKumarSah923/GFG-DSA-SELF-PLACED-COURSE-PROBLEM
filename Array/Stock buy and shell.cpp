#include<iostream>
using namespace std;
class Solutiomn{
    public:
    vector<vector<int> A,int n)
    {
        vector<vector<int>> ans;
        vector<int> days;
        bool buy=true,sell=false;
        for(int i=1;i<n;i++){
            if(A[i-1]<A[i])
            {
                if(buy==true){
                    days.push_back(i-1);
                    buy=false;
                    sell=true;
                }
            }
            if(buy ==false and sell ==true and i==n-1){
                if(days.size()>0) ans.push_back(days);
                days.cle
            }
        }   
    }
}
int main(){
    Solutiomn sol;
    vector<int> prices={100,180,260,310,40,535,695};
    int n =prices.size();
    vector<vector<int>> result=sol.stockBuySell(prices,n);
    for(auto& transaction: result){
        for(int day: transaction){
            cout<<day<<" ";
        }
        cout<<endl;
    }
    return 0;
}