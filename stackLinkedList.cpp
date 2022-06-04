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
struct myStack{
    Node *head;
    int cap;
    myStack(){
        head = NULL;
        cap =0;
    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        cap++;
    }
    int peek(){
        if(head==NULL)return INT_MAX;
        return head->val;
    }
    int size(){
        return cap;
    }
    bool isEmpty(){
        return head==NULL;
    }
    int pop(){
        if(head==NULL)return INT_MAX;
        int res = head->val;
        Node *temp = head;
        head = head->next;
        delete temp;
        cap--;
        return res;
    }
};
int main(){
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<" "<<s.pop()<<" "<<s.size()<<" ";
    s.push(40);
    cout<<s.peek()<<" "<<s.isEmpty();
}