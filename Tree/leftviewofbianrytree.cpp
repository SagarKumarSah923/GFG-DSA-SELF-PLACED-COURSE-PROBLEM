#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        left=right=NULL;
    int maxLevel=0;
    void printleft(Node*root,int level){
        if(root==NULL)
            return ;
        if(maxLevel<level)
        {
            cout<<(root->key)<<" "';
            maxlevel=level;
        }
        printleft(root->left,level+1);
        printleft(root->Right,level+1);
        }
        void printleftview(Node*root){
            printleft(root,1);
        }
int main(){
    Node*root=new Node(23);
    root->left=new Node(33);
    root->right=new Node(89);
    return 0;

}
        }