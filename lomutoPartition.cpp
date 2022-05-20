#include<iostream>
#include<vector>
using namespace std;    
int lomutoPartition(vector<int>&nums,int l,int h){
    int i =l-1;
    for(int j = l;j<=h-1;j++){
        if(nums[j]<nums[h]){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[i+1],nums[h]);
    return i+1;
}
int main(){
    vector<int>nums{10,80,30,90,40,50,70};
    cout<<lomutoPartition(nums,0,nums.size()-1);
    return 0;
}