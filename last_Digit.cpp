#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:\n";
    cin>>a;
    cout<<"Last digit is:"<<abs(a%10);
    return 0;
}