#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,20,20,10,30,10};
    unordered_map<int,int>m;
    for(int i =0;i<v.size();i++){
        m[v[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}