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
struct Queue{
    Node *front,*rear;
    int size;
    Queue(){
        front = NULL;
        rear = NULL;
        size =0;
    }
    void Enque(int x){
        Node *temp = new Node(x);
        size++;
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void Deque(){
        if(front == NULL)return;
        size--;
        Node *temp = front;
        front = front->next;
        if(front ==NULL)rear = NULL;
        delete temp;
    }
};
int main(){
    return 0;
}