#include<iostream>
using namespace std;
int main(){
    int a = 1;
    float b = 2;
    double c = 3;
    long long l = 5;
    string d = "gfgc";
    cout<<b/c<<" "<<b/a<<" "<<static_cast<int>(c)/a<<" "<<static_cast<int>(c)/a+(l)<<" "<<d<<" "<<d[3];
    return 0;
}