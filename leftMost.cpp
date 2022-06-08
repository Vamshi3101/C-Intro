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
void LeftMostEle(Node *root){
    if(root==NULL)return;
    queue<Node *>s;
    s.push(root);
    while(s.empty()==false){
        int count = s.size();
        for(int i =0;i<count;i++){
            Node *curr = s.front();
            s.pop();
            if(i==0)cout<<curr->val<<" ";
            if(curr->left!=NULL)s.push(curr->left);
            if(curr->right!=NULL)s.push(curr->right);
        }
    }
    return;
}
void childSumProp(Node *root){
    if(root==NULL){
        cout<<"Yes";return;
    }
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        int count = q.size();
        for(int i =0;i<count;i++){
            int res = 0;
            Node *curr = q.front();
            q.pop();
            if(curr->left!=NULL){
                res+=curr->left->val;
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                res+=curr->right->val;
                q.push(curr->right);
            }
            if(curr->val!=res && res!=0){
                cout<<"NO";return;
            }
        }
    }
    cout<<"YES";return;
}
int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    // root->right->left = new Node(60);
    LeftMostEle(root);
    cout<<"\n";
    childSumProp(root);
    return 0;
}