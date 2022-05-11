#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = log10(n);
    cout<<int(n/pow(10,double(a)));
    return 0;
}