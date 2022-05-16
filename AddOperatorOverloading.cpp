#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex():real(0),imag(0){}
    complex(int a,int b):real(a),imag(b){}
    complex operator+(const complex &comp){
        complex res;
        res.real = real+comp.real;
        res.imag = imag+comp.imag;
        return res;
    }
    void print(){
        cout<<real<<"+i"<<imag;
    }
};
int main(){
    complex a(1,2),b(3,4);
    complex c = a+b;
    c.print();
    return 0;
}