#include<iostream>
#include<vector>
using namespace std;
int peakEle(vector<int>&nums,int l,int h){
    while(l<=h){
        int mid = (l+h)/2;
        if((mid==0 || nums[mid]>=nums[mid-1]) && (mid == h || nums[mid]>=nums[mid+1]))return nums[mid];
        if(mid>0 && nums[mid-1]>=nums[mid]){
            h = mid-1;
        }
        else{
            l= mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums{5,10,20,40,60,80};
    cout<<peakEle(nums,0,nums.size()-1);
    return 0;
}