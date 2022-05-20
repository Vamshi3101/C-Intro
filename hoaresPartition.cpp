#include<iostream>
#include<vector>
using namespace std;
int HoarsePartition(vector<int>&nums,int l,int h){
    int pivot = nums[l];
    int i = l-1,j=h+1;
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
int main(){
    vector<int>nums{5,3,8,4,2,7,1,10};
    cout<<HoarsePartition(nums,0,nums.size()-1);
    return 0;
}