#include<iostream>
#include<vector>
using namespace std;
void mergeFunction(vector<int>&nums,int low,int mid,int high){
    int i =low,j = mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]){
            cout<<nums[i]<<" ";
            i++;
        }
        else{
            cout<<nums[j]<<" ";
            j++;
        }
    }
    while(i<=mid){
        cout<<nums[i]<<" ";
        i++;
    }
    while(j<=high){
        cout<<nums[j]<<" ";
        j++;
    }
}
int main(){
    vector<int>nums{10,15,20,40,8,11,55};
    mergeFunction(nums,0,3,6);
    return 0;
}