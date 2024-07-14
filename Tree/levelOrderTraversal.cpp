#include<iostream>
using namespace std;
struct node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        left=right=NULL;
    }
}
int main(){
    void printLevel(Node*root){
        if(root=NULL)
        queue<Node>q;
    while(q.Empty()==false){
        Node*curr=q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->key!=NULL)
           q.push(curr->left);
        if((curr->right!=NULL))
           q.push(curr->right);
    }
    }
}