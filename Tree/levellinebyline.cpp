#include<iostream>
using namespace std;
Node struct(int n){
    int *key;
    Node*left;
    Node*right;
    Node(int k)
    left=right=NULL;
    void printLevelorder(Node*root){
        if(root==NULL)
          return;
        queue<Node*>q;
        q.push(root);
        while(q.empty()==false){
            int count=q.size();
            for(int i=0;i<count;i++){
                Node*curr=q.front();
                q.pop();
                cout<<((curr->key)<<"");
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
                cout<<"\n";
            }
        }
    }


}
int main(){
    Node*root=new node(12);
    root->left=new node(44);
    root->right=new node(14);
    root->left->left=new node(19);

}