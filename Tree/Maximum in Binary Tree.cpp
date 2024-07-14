#include<iostream>
using namespace std;
Node struct(int n){
    int key;
    Node*left;
    Node*right;
    Node(int k){
        left=right=NULL;
    int getMax(Node*root){
        if(root==NULL)
            return INT_MIN;
        else
           return max(root->key,max(getMax(root->left),getMax(root->right)));
    }
    }
}
int main(){
    Node*root=new node(12);
    root->left=new node(44);
    root->right=new node(14);
    root->left->left=new node(19);
}