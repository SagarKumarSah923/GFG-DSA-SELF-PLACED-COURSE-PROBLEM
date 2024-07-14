#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        left=right=NULL;
    bool isCsum(Node*root){
        if(root==NULL)
           return true;
        if(root->left!=NULL){
            sum+=root->left->key
        }
        if(root->right!=NULL){
            sum+=root->right->key;
        }
        return 
             (root->key==sum) && ifSum(root->left) && isSum(root->right);
    }
    }
}
int main(){
    Node*root=new Node(78);
    root->left=new Node(89);
    root->right=new Node(23);
    root->left->left=new Node(33);
}