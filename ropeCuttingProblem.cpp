#include<iostream>
using namespace std;
int countRope(int n,int a,int b,int c){
    if(n==0)return 0;
    if(n<0)return -1;
    int res1 = max(countRope(n-a,a,b,c),countRope(n-b,a,b,c));
    int res = max(res1,countRope(n-c,a,b,c));
    if(res==-1)return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<countRope(n,a,b,c);
    return 0;
}