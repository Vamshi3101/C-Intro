#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{10,20,5,7};
    sort(nums.begin(),nums.end());
    for(auto x:nums){
        cout<<x<<" ";
    }
    cout<<"\n";
    sort(nums.begin(),nums.end(),greater<int>());
    for(auto x:nums){
        cout<<x<<" ";
    }
    return 0;
}