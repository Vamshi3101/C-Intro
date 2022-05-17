#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i =0;i<a.length()/2;i++){
        if(a[i]!=a[a.length()-1-i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}