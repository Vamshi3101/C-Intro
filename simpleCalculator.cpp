#include<iostream>
using namespace std;
int main(){
    int operation,a,b;
    cin>>operation>>a>>b;
    switch(operation){
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        default:
            cout<<"Choose in 1,2,3";
    }
    return 0;
}