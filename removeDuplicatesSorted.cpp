#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,20,30,30,30,30};
    int l =1;
    for(int i =1;i<v.size();i++){
        if(v[i]!=v[l-1]){
            v[l]=v[i];
            l++;
        }
    }
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n"<<l;
    return 0;
}