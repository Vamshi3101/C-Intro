#include<iostream>
using namespace std;
#define RES(a,b) (a*b);
int main(){
    int t;
    cout<<"Number of testcases"<<endl;
    cin>>t;
    for(int i = 0;i<t;i++){
        int a,b;
        cout<<"Enter first number:"<<endl;
        cin>>a;
        cout<<"Enter second number:"<<endl;
        cin>>b;
        cout<<RES(a,b);
    }
    return 0;
}