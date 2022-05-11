#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a = max(m,n),i =1,b=min(m,n);
    while(i<m*n){
        if(a*i%b==0)
            break;
        i++;
    }
    cout<<a*i;
    return 0;
}