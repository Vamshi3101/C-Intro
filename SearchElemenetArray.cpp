#include<iostream>
#include<vector>
using namespace std;
int Search(vector<int>&v,int x){
    for(int j =0;j<v.size();j++){
        if(v[j]==x)return j;
    }
    return -1;
}
int main(){
    vector<int>v {20,5,7,25};
    int x;
    cin>>x;
    cout<<Search(v,x);
    return 0;
}