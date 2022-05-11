#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact = 1;
    for(int i =2;i<=n;i++){
        fact*=i;
    }
    if(n>=0){
        cout<<fact;
    }
}