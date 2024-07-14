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
int main{
    Node*root=new Node(20);
    Node->left=new Node(50);
    Node->right=new Node(30);
    Node->left->left=new Node(40);

}

//Empty Tree
struct node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
}
int main{
    Node*root=NULL;
    left->right=NULL;
}