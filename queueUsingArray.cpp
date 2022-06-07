#include<iostream>
using namespace std;
struct myQueue{
    int cap,size,front;
    int *arr;
    myQueue(int n){
        cap = n;
        size =0;
        front =0;
        arr = new int[cap];
    }
    bool isFull(){
        return size==cap;
    }
    bool isEmpty(){
        return size==0;
    }
    int getFront(){
        if(isEmpty())return -1;
        else return front;
    }
    int getRear(){
        if(isEmpty())return -1;
        else return (front+size-1)%cap;
    }
    void enque(int x){
        if(isFull())return;
        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    void deque(){
        if(isEmpty())return;
        front = (front+1)%cap;
        size--;
    }
};
int main(){
    myQueue q(3);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    cout<<q.size<<" "<<q.arr[q.front]<<" ";
    q.deque();
    q.deque();
    cout<<q.size<<" "<<q.arr[q.front]<<" ";
    q.enque(40);
    cout<<q.size<<" "<<q.arr[q.front]<<" "<<q.arr[q.getRear()]<<" ";
    return 0;
}