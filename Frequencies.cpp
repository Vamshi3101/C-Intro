#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,30};
    int f = 1;
    cout<<v[0]<<" ";
    for(int i =1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            cout<<f<<"\n";
            cout<<v[i]<<" ";
            f =1;
        }
        else f++;
    }
    cout<<f;
    return 0;
}