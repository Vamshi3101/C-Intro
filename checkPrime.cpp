#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =2;i<n;i++){
        if(n%i==0){
            cout<<"Composite";
            return 0;
        }
        if(i==n-1){
            cout<<"prime";
        }
    }
    return 0;
}