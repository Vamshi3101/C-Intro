#include<iostream>
#include<vector>
using namespace std;
void intersection(vector<int>&nums1,vector<int>&nums2){
    int i =0,j =0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j])i++;
        if(nums1[i]>nums2[j])j++;
        if(nums1[i]==nums2[j]){
            if(nums1[i]!=nums1[i-1] && nums2[j]!=nums2[j-1]){
                cout<<nums1[i]<<" ";
                i++;j++;
            }
            else{
                if(nums1[i]==nums1[i-1])i++;
                else j++;
            }
        }
    }
}
int main(){
    vector<int>nums1{1,1,3,3,3},nums2{1,1,1,1,3,5,7};
    intersection(nums1,nums2);
    return 0;
}