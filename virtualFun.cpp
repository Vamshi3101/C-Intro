#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"base ";
    }
};
class derieved:public base{
    public:
    void print(){
        cout<<"Derieved ";
    }
};
int main(){
    derieved d;
    d.print();
    base *ptr = &d;
    ptr->print();
    return 0;
}