#include<iostream>
using namespace std;
struct myStack{
    int cap;
    int *arr;
    int top;
    myStack(int x){
        cap = x;
        arr = new int[cap];
        top = -1;
    }
    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    myStack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<" "<<s.peek()<<" "<<s.isEmpty()<<" "<<s.size();
    return 0;
}