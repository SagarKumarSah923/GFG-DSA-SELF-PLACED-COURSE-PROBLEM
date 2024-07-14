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
void printDist(Node*root,int k){
    if(root==NULL){
         return
    if(k==0){
        cout<<(root->key)<<" ";
    }
    else{
        printkdist(root->left,k-1);
        printkdist(root->right,k-1);
    }
    }
}