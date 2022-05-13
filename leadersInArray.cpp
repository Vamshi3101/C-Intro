#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v {7,10,4,10,6,5,2};
    int lead = v[v.size()-1];
    cout<<lead<<" ";
    for(int i = v.size()-2;i>=0;i--){
        if(v[i]>lead){
            cout<<v[i]<<" ";
            lead = v[i];
        }
    }
    return 0;
}