#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printCLL(Node *head){
    if(head==NULL)return;   
    Node *p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
}
Node *InsertBegin(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int a = head->data;
        head->data = temp->data;
        temp->data = a;
        return head;
    }
}
Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL)temp->next = temp;
    else{
        temp->next = head->next;
        head->next = temp;
        int a = head->data;
        head->data = temp->data;
        temp->data = a;
    }
    return temp;
}
Node *delHead(Node *head){
    if(head==NULL)return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    else{
        head->data = head->next->data;
        Node *curr = head->next;
        head->next = head->next->next;
        delete curr;
        return head;
    }
}
Node *delPos(Node *head,int pos){
    if(head==NULL)return NULL;
    if(pos==1)return delHead(head);
    else{
        Node *curr = head;
        for(int i =0;i<pos-2;i++){
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    head = InsertBegin(head,35);
    head = insertEnd(head,78);
    head = delHead(head);
    head = delPos(head,3);
    printCLL(head);
    return 0;
}