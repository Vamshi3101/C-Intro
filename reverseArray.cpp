#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,5,7};
    for(int i = 0;i<(v.size()/2);i++){
        int temp = v[i];
        v[i]=v[v.size()-i-1];
        v[v.size()-i-1]=temp;
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}