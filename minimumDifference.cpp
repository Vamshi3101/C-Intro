#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int minDifference(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int res = INT_MAX;
    for(int i =1;i<nums.size();i++){
        res = min(res,abs(nums[i]-nums[i-1]));
    }
    return res;
}
int main(){
    vector<int>nums{10,8,1,4};
    cout<<minDifference(nums);
    return 0;
}