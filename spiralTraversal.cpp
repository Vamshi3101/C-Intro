#include<iostream>
#include<stack>
using namespace std;
struct Tree{
    int val;
    Tree *left;
    Tree *right;
    Tree(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
void SpiralTraversal(Tree *root){
    if(root==NULL)return;
    stack<Tree*>s1,s2;
    s1.push(root);
    bool flag = false;
    while(!s1.empty()|| !s2.empty()){
        if(flag){
            int count = s2.size();
            for(int i =0;i<count;i++){
                Tree *temp = s2.top();
                s2.pop();
                cout<<temp->val<<" ";
                if(temp->right!=NULL)s1.push(temp->right);
                if(temp->left!=NULL)s1.push(temp->left);
            }
        }
        else{
            int count = s1.size();
            for(int i =0;i<count;i++){
                Tree *temp = s1.top();
                s1.pop();
                cout<<temp->val<<" ";
                if(temp->left!=NULL)s2.push(temp->left);
                if(temp->right!=NULL)s2.push(temp->right);
            }
        }
        flag = !flag;
    }
}
int main(){
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);
    root->right->left->left = new Tree(10);
    root->right->left->right = new Tree(11);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->left->left->left = new Tree(8);
    root->left->left->right = new Tree(9);
    SpiralTraversal(root);
    return 0;
}