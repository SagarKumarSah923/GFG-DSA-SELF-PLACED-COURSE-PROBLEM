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
int main(){
    Node*root=new node(12);
    root->left=new node(44);
    root->right=new node(14);
    root->left->left=new node(19);
}