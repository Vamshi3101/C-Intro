#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(1)<<double(a)/b;
    return 0;
}