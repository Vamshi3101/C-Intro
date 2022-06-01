#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};
void printLL(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
Node *insertBegin(Node *head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    if(head!=NULL)head->prev = temp;
    return temp;
}
Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    Node *curr = head;
    if(head==NULL)return temp;
    while(curr->next!=NULL)curr = curr->next;
    curr->next= temp;
    temp->prev = curr;
    return head;
}
Node *ReverseLL(Node *head){
    if(head ==NULL || head->next==NULL)return head;
    Node *prev= NULL,*curr = head;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}
Node *delHead(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node *temp = head;
        temp = temp->next;
        temp->prev = NULL;
        delete head;
        return temp;
    }
}
Node *delEnd(Node *head){
    if(head == NULL)return head;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node *curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
        return head;
    }
}
int main(){
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    head->next = temp;
    temp->prev = head;
    temp->next= temp1;
    temp1->prev = temp;
    head = insertBegin(head,5);
    head = insertEnd(head,40);
    head = ReverseLL(head);
    head = delHead(head);
    head = delEnd(head);
    printLL(head);
    return 0;
}