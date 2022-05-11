#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int gcd = 1;
    int a = min(m,n);
    for(int i =2;i<=a;i++){
        if(m%i==0 && n%i==0)
            gcd =i;
    }
    cout<<gcd;
    return 0;
}