#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    int x=0,y=0;
    switch(n){
        case 'a':
            x--;
            cout<<x<<" "<<y;
            break;
        case 'd':
            x++;
            cout<<x<<" "<<y;
            break;
        case 's':
            y--;
            cout<<x<<" "<<y;
            break;
        case 'w':
            y++;
            cout<<x<<" "<<y;
            break;
        default:
            cout<<"Choose a,s,d,w";
    }
    return 0;
}