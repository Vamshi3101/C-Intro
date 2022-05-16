#include<iostream>
using namespace std;
struct complex{
    int r,i;
    complex():r(0),i(0){}
    complex(int a,int b):r(a),i(b){}
};
int main(){
    complex c1(1,2),c2(3,4),c3;
    c3.r+=c1.r+c2.r;
    c3.i+=c1.i+c2.i;
    cout<<c3.r<<"+j"<<c3.i;
    return 0;
}