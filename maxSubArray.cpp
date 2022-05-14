#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{-5,1,-2,3,-1,2,-2};
    int res =nums[0];
    int maxEnding = nums[0];
    for(int i =1;i<nums.size();i++){
        maxEnding = max(maxEnding+nums[i],nums[i]);
        res = max(res,maxEnding);
    }
    cout<<res;
    return 0;
}