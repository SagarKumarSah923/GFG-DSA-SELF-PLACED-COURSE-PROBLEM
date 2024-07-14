//Check for balanced tree in two way 
//Naive Approach and Efficient Approach

#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int key){
        left=right=NULL;

    bool isBalanced(Node*root){
        if(root==NULL)
            return true;
        int lh=height(root->left);
        int rh=right(root->right);
            return (abs(lh-rh) <=1 && isBalanced(root->left) isBalanced(root->right));
    }
    }
}
int main(){
    Node*root=new Node(99);
    root->left=new Node(34);
    root->right=new Node(90);
    root->left->left=new Node(97);
}

int is balanced(Node*root){
    if(root==NULL)
        return 0;
    int lh=isBalanced(root->left);
    if(lh==-1)
       return -1;
    int rh=isBalanced(root->right);
    if(rh==-1)
       return -1;
    if(abs(lh-rh)>1)
       return -1;
    else
       return max(lh,rh)+1;
}