#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{15,20,5,15},nums1{15,15,15,20,10};
    unordered_set<int>s(nums.begin(),nums.end());
    for(auto x:nums1){
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}