#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&nums){
    bool swapped = false;
    for(int i =0;i<nums.size()-1;i++){
        for(int j =0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped)break;
    }
}
int main(){
    vector<int>nums{5,8,10,20};
    bubbleSort(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}