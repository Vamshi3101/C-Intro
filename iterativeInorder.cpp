#include<iostream>
#include<stack>
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
void preorder(Node *root){
    if(root==NULL)return;
    stack<Node*>s;
    s.push(root);
    Node *curr = root;
    while(s.empty()==false){
        while(curr!=NULL){
            cout<<curr->val<<" ";
            if(curr->right!=NULL)s.push(curr->right);
            curr = curr->left; 
        }
        if(s.empty()==false){
            curr = s.top();
            s.pop();
        }
    }
}
int maxEle(Node *root){
    if(root==NULL)return INT_MIN;
    else return max(root->val,max(maxEle(root->left),maxEle(root->right)));
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(100);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    cout<<maxEle(root)<<"\n";
    preorder(root);
    return 0;
}