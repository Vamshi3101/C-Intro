#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(int x){
        val = x;
        next = NULL;
    }
};
Node *InsertSortLL(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    else if(temp->val<head->val){
        temp->next = head;
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next->val<temp->val && curr->next!=NULL){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
}
void MiddleLL(Node *head){
    if(head==NULL)return; 
    Node *curr = head,*temp = head;
    while(curr!=NULL && curr->next!=NULL ){
        temp = temp->next;
        curr = curr->next->next;
    }
    cout<<temp->val<<" ";
}
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->val<<" ";
        curr = curr->next;
    }
}
void NthLastNode(Node *head,int n){
    if(head==NULL)return;
    Node *first = head;
    for(int i =0;i<n;i++){
        if(first==NULL)return;
        first = first->next;
    }
    Node *second = head;
    while(first!=NULL){
        first = first->next;
        second = second->next;
    }
    cout<<second->val;
}
Node *RemoveDuplicate(Node *head){
    if(head==NULL)return NULL;
    Node *curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->val==curr->next->val){
            Node *temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    MiddleLL(head);
    cout<<"\n";
    head = InsertSortLL(head,40);
    head = RemoveDuplicate(head);
    printList(head);
    cout<<"\n";
    MiddleLL(head);
    cout<<"\n";
    NthLastNode(head,5);
    return 0;
}