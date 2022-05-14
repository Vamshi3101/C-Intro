#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{3,-4,5,6,-8,7};
    int maxNormal = nums[0];
    int res = nums[0];
    for(int i = 1;i<nums.size();i++){
        maxNormal= max(maxNormal+nums[i],nums[i]);
        res = max(res,maxNormal);
    }
    int minSubArray = nums[0];
    int resSub = nums[0];
    for(int i = 1;i<nums.size();i++){
        minSubArray= min(minSubArray+nums[i],nums[i]);
        resSub = min(resSub,minSubArray);
    }
    int sum = 0;
    for(int i =0;i<nums.size();i++){
        sum+=nums[i];
    }
    int maxSub = sum-resSub;
    cout<<max(maxNormal,maxSub);
    return 0;
}