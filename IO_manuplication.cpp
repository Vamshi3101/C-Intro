#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    bool a = true;
    int b = 26;
    float c = 1.456f;
    cout<<a<<"\n";
    cout<<boolalpha<<a<<"\n";
    cout<<noboolalpha<<a<<"\n";
    cout<<hex<<b<<"\n";
    cout<<oct<<b<<"\n";
    cout<<dec<<b<<"\n";
    cout<<fixed<<setprecision(1)<<c;
    return 0;
}