#include<iostream>
using namespace std;
Node struct{
    int key;
    Node*left;
    Node*right;
    Node(int key){
        left=right=NULL;
    int maxWidth(Node*root){
        if(root==NULL)
           return 0;
        queue<Node*>q;
        q.push(root);
        int res=0;
        while(q.empty()==false){
            int count=q.size();
            res=max(res,count);
            for(int i=0;i<count;i++){
                Node*curr=q.top();
                q.pop();
                if(curr->left!=NULL)
                   q.push(curr->left);
                if(curr->right!=NULL)
                   q.push(curr->right);
            }
        }
        return res;
    }
    }
}
int main(){
    Node*root=new Node(34);
    root->left=new Node(99);
    root->right=new Node(83);
}