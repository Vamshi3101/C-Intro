#include<iostream>
#include<vector>
using namespace std;
int SearchRotated(vector<int>&nums,int l,int h,int k){
    while(l<=h){
        int mid = (l+h)/2;
        if(nums[mid]==k)return mid;
        if(nums[mid]>nums[l]){
            if(k>=nums[l] && k<nums[mid]){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        else{
            if(k>nums[mid] && k<=nums[h]){
                l = mid+1;
            }
            else h = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums{100,200,500,1000,2000,10,20};
    int k;
    cin>>k;
    cout<<SearchRotated(nums,0,nums.size()-1,k);
    return 0;
}