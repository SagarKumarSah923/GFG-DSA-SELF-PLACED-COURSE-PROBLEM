#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        left=right=NULL;
    }
}
int height(Node*root){
    if(root==NULL)
       return
}
else  
    return max(height(root->left),height(root->right))+1;
}