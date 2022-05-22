#include<iostream>
#include<vector>
using namespace std;
void segPosNegLomuto(vector<int>&nums){
    int i =-1;
    for(int j=0;j<nums.size();j++){
        if(nums[j]<0){
            i++;
            swap(nums[i],nums[j]);
        }
    }
}
void segPosNegHoares(vector<int>&nums){
    int i =-1,j=nums.size();
    while(true){
        do{
            i++;
        }while(nums[i]<0);
        do{
            j--;
        }while(nums[j]>=0);
        if(i>=j)return;
        swap(nums[i],nums[j]);
    }
}
int main(){
    vector<int>nums{-12,18,-10,15};
    // segPosNegLomuto(nums);
    segPosNegHoares(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}