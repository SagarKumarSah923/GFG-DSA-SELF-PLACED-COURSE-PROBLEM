#include<iostream>
using namespace std;
    Node struct(int n){
        int key;
        Node*left;
        Node*right;
        Node(int k){
            left=right=NULL;
        int getSize(Node*root){
            if(root==NULL)
                return 0;
            else  
                return 1+getSize(root->left)+getSize(root->right);
        }
        
        }
    }
int main(){
    Node*root=new Node(23);
    root->left=new Node(88);
    root->left->left=new Node(21);
    
}
