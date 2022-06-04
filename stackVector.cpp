#include<iostream>
#include<vector>
using namespace std;
struct myStack{
    vector<int>v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
};
int main(){
    return 0;
}