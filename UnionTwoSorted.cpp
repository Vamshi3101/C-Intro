#include<iostream>
#include<vector>
using namespace std;
void UnionSorted(vector<int>&nums1,vector<int>&nums2){
    int i =0,j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(i>0 && nums1[i]==nums1[i-1]){
            i++;
            continue;
        }
        if(j>0 && nums2[j]==nums2[j-1]){
            j++;
            continue;
        }
        if(nums1[i]<nums2[j]){cout<<nums1[i]<<" ";i++;}
        else if(nums1[i]>nums2[j]){cout<<nums2[j]<<" ";j++;}
        else{
            cout<<nums1[i]<<" ";
            i++;j++;
        }
    }
    while(i<nums1.size()){
        if(nums1[i]==nums1[i-1]){
            i++;
            continue;
        }
        else{
            cout<<nums1[i]<<" ";
            i++;
        }
    }
    while(j<nums2.size()){
        if(nums2[j]==nums2[j-1]){
            j++;continue;
        }
        else{
            cout<<nums2[j]<<" ";
            j++;
        }
    }
}
int main(){
    vector<int>nums1{2,10,20,20},nums2{3,20,40};
    UnionSorted(nums1,nums2);
    return 0;
}