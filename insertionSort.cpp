#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&nums){
    for(int i =1;i<nums.size();i++){
        int key = nums[i];
        int j;
        for(j = i-1;nums[j]>key && j>=0;j--){
            nums[j+1]= nums[j];
        }
        nums[j+1] = key;
    }
}
int main(){
    vector<int>nums{20,5,40,60,10,30};
    insertionSort(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}