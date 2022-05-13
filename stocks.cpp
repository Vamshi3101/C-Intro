#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,5,3,8,12};
    int profit=0;
    for(int i =1;i<v.size();i++){
        if(v[i]>v[i-1]){
            profit += v[i]-v[i-1];
        }
    }
    cout<<profit;
    return 0;
}