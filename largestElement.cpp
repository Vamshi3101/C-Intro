#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,5,20,8};
    int a = INT_MIN;
    for(int i =0;i<v.size();i++){
        a = max(a,v[i]);
    }
    cout<<a;
    return 0;
}