#include<iostream>
#include<vector>
using namespace std;
void DeleteElement(vector<int>&v,int x){
    for(int i =0;i<v.size();i++){
        if(v[i]==x){
            v[i] = v[i+1];
            v[i+1]=x;
        }
    }
}
int main(){
    vector<int>v{3,8,12,5,6};
    int x;
    cin>>x;
    DeleteElement(v,x);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}