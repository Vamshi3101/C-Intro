#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v {0,10,0};
    int p =0;
    for(int i =0;i<v.size();i++){
        if(v[i]!=0){
            int temp = v[p];
            v[p] = v[i];
            v[i] =temp;
            p++;
        }
    }
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}