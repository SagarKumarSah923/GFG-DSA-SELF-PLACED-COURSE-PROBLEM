#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    long long trapperWater(int arr[],int n){
        vector<int> left(n),right(n);
        for(int i=0;i<n;i++){
            if(i==0)
            left[i]=arr[0];
        else 
           left[i]=max(arr[i],left[i-1]);
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1)
            right[i]=arr[n-1];
        else
            right[i]=max(arr[i],right[i+1]);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-arr[i];
        }
        return ans;
        }
};

int main(){
    Solution sol;
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    long long trapperWater=sol.trapperWater(arr,n);
    cout<<"Trapped Water:"<<trapperWater<<endl;
    return 0;
}


class Solution {
public:
        bool calc(vector<vector<int>>&matrix,vector<int>>&ans,int)
int n=matrix.size();
if(i>=n || j>=n) return false;
ans[i][j]=1;
if(i==n-1 && j==n-1) return true;
int jumps =matrix[i][j];
for(int k=1;k<=jumps;k++){
    if(calc(matrix,ans,i,j+k)) return true;
    if(calc(matrix,ans,i+k,j)) return true;

}
ans[i][j]=0;
return false;
}

	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	    int n=matrix.size();
	    vector<vector<int>> ans(n,vector<int>(n,0));
	    if(calc(matrix,ans,0,0))
	          return ans;
	   else 
	       return {{-1}};
	}

};
public class Recursion2 {
public static void towerOfHanoi(int n, String src, String helper, String dest) {
if(n == 1) {
System.out.println("transfer disk " + n + " from " + src + " to " + dest);
return;
}
//transfer top n-1 from src to helper using dest as 'helper'
towerOfHanoi(n-1, src, dest, helper);
//transfer nth from src to dest
System.out.println("transfer disk " + n + " from " + src + " to " + helper);
//transfer n-1 from helper to dest using src as 'helper'
towerOfHanoi(n-1, helper, src, dest);
}
public static void main(String args[]) {
int n = 4;
towerOfHanoi(n, "A", "B", "C");
}
}


