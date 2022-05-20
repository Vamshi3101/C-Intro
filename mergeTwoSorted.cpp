#include<iostream>
#include<vector>
using namespace std;
void mergeTwoSorts(vector<int>&nums1,vector<int>&nums2){
    int i =0,j =0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<=nums2[j]){
            cout<<nums1[i]<<" ";
            i++;
        }
        else{
            cout<<nums2[j]<<" ";
            j++;
        }
    }
    while(j<nums2.size()){
        cout<<nums2[j]<<" ";
        j++;
    }
    while(i<nums1.size()){
        cout<<nums1[i]<<" ";
        i++;
    }
}
int main(){
    vector<int>nums1{10,20,35},nums2{5,50,50};
    mergeTwoSorts(nums1,nums2);
    return 0;
}