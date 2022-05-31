#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next = NULL;
    }
};
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
void printListRecursive(Node *head){
    if(head==NULL)return;
    cout<<head->data<<" ";
    printListRecursive(head->next);
}
Node *insert(Node *head,int x){
    Node *curr = new Node(x);
    curr->next = head;
    return curr;
}
Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL)return temp;
    Node *curr = head;
    while(curr->next!=NULL)curr = curr->next;
    curr->next = temp;
    return head;
}
Node *delHead(Node *head){
    if(head==NULL)return head;
    Node *temp = head->next;
    delete head;
    return temp;
}
Node *delLast(Node *head){
    if(head==NULL)return head;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next!=NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}
Node *insertPos(Node *head,int pos,int x){
    Node *temp = new Node(x);
    if(pos==1){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i =1;i<=pos-2&&curr!=NULL;i++){
        curr= curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printListRecursive(head);
    cout<<"\n";
    head = insert(head,5);
    head = delHead(head);
    head = delLast(head);
    head = insertEnd(head,50);
    head = insertPos(head,3,9);
    printList(head);
    return 0;
}