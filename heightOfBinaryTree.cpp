#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node *left,*right;
    Node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
int height(Node *root){
    if(root==NULL)return 0;
    else return max(height(root->left),height(root->right))+1;
}
void NodesAtK(Node *root,int k){
    if(root == NULL)return;
    if(k==0)cout<<root->val<<" ";
    else{
        NodesAtK(root->left,k-1);
        NodesAtK(root->right,k-1);
    }
}
void levelOrder(Node *root){
    if(root==NULL)return;
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        Node *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
}
int size(Node *root){
    if(root ==NULL)return 0;
    else{
        return 1+size(root->left)+size(root->right);
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    cout<<height(root)<<"\n"<<size(root)<<"\n";
    NodesAtK(root,2);
    cout<<"\n";
    levelOrder(root);
    return 0;
}