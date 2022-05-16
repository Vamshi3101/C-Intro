#include<iostream>
using namespace std;
struct Area{
    int  side,le,wd;
    Area(int x,int y,int z):side(x),le(y),wd(z){}
};
int main(){
    Area a(25,40,60);
    cout<<"Square Area:"<<a.side*a.side<<"\n";
    cout<<"Rectangle Area:"<<a.le*a.wd;
    return 0;
}