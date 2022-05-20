#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&nums){
    for(int i =0;i<nums.size()-1;i++){
        int min_ind = i;
        for(int j = i+1;j<nums.size();j++){
            if(nums[j]<nums[min_ind])min_ind=j;
        }
        swap(nums[min_ind],nums[i]);
    }
}
int main(){
    vector<int>nums{10,5,8,20,2,18};
    selectionSort(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<"  ";
    }
    return 0;
}