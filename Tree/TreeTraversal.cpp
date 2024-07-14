//Breadthe first search
//Depth first search
// inorder
// preorder
// postorder
#include<iostream>
using namespace std;
struct node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
    
}
void(Node*root){
    if(root=NULL){
        inorder(root->left);
        cout<<(root->key);
        inorder(root->right);
    }
}
//Preorder
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }

}
void(Node*root){
    if(root!=NULL){
        cout<<(root->key);
        inorder(root->left);
        inorder(root->right);
    }
}

//Postorder
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
}
void(Node*root){
    if(root!=NULL){
        cout<<()
    }
}