#include<iostream>
#include<vector>
using namespace std;
int lomutoPartition(vector<int>&nums,int l,int h){
    int i =l-1,pivot = nums[h];
    for(int j =l;j<h;j++){
        if(nums[j]<pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[i+1],nums[h]);
    return i+1;
}
void QuickSortLomuto(vector<int>&nums,int l,int h){
    if(l<h){
        int p = lomutoPartition(nums,l,h);
        QuickSortLomuto(nums,l,p-1);
        QuickSortLomuto(nums,p+1,h);
    }
}
int main(){
    vector<int>nums{8,4,7,9,3,10,5};
    QuickSortLomuto(nums,0,nums.size()-1);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}