#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{30,5,20};
    int s = v[0];
    for(int i =0;i<v.size()-1;i++){
        v[i] = v[i+1];
    }
    v[v.size()-1] = s;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}