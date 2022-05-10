#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a = 5.43,b = 2.653;
    cout<<a/b<<"\n";
    cout<<fixed<<setprecision(3)<<a/b;
    return 0;
}