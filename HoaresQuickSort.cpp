#include<iostream>
#include<vector>
using namespace std;
int hoaresPartition(vector<int>&nums,int l,int h){
    int i =l-1,j=h+1,pivot = nums[l];
    while(true){
        do{
            i++;
        }while(nums[i]<pivot);
        do{
            j--;
        }while(nums[j]>pivot);
        if(i>=j)return j;
        swap(nums[i],nums[j]);
    } 
}
void QuickSortHoares(vector<int>&nums,int l,int h){
    if(l<h){
        int p = hoaresPartition(nums,l,h);
        QuickSortHoares(nums,l,p);
        QuickSortHoares(nums,p+1,h);
    }
}
int main(){
    vector<int>nums{10,80,30,90,40,50,70};
    QuickSortHoares(nums,0,nums.size()-1);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}