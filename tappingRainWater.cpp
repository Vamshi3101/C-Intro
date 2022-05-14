#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums {3,0,1,2,5};
    int lmax[5],rmax[5];
    lmax[0]= nums[0],rmax[nums.size()-1] = nums[nums.size()-1];
    for(int i =1;i<nums.size();i++){
        lmax[i] = max(nums[i],lmax[i-1]);
    }
    for(int i = nums.size()-2;i>=0;i--){
        rmax[i] = max(nums[i],rmax[i+1]);
    }
    int res =0;
    for(int i =1;i<nums.size()-1;i++){
        res += min(lmax[i],rmax[i])-nums[i];
    }
    cout<<res;
    return 0;
}