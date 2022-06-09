#include<iostream>
using namespace std;
struct Tree{
    int val;
    Tree *left,*right;
    Tree(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
bool search(Tree *root,int target){
    while(root!=NULL){
        if(root->val==target)return true;
        else if(root->val>target)root = root->left;
        else root = root->right;
    }
    return false;
}
void preorder(Tree *root){
    if(root !=NULL){
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
Tree* insert(Tree *root,int num){
    Tree *curr = root,*parent = NULL,*temp = new Tree(num);
    while(root!=NULL){
        parent = root;
        if(root->val>num)root = root->left;
        else if(root->val<num)root = root->right;
        else return curr;
    }
    if(parent ==NULL)return temp;
    if(parent->val<num)parent->right = temp;
    else parent->left = temp;
    return curr;
}
int main(){
    Tree *root = new Tree(15);
    root->left = new Tree(5);
    root->right = new Tree(20);
    root->right->left = new Tree(18);
    root->right->right = new Tree(80);
    root->right->left->left = new Tree(16);
    cout<<search(root,18)<<"\n";
    preorder(root);
    cout<<"\n";
    root = insert(root,3);
    preorder(root);
    return 0;
}