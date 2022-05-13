#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{100,20,200};
    for(int i =0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}