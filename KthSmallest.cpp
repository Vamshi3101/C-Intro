#include<iostream>
#include<vector>
using namespace std;
int lomutoPartition(vector<int>&nums,int l,int h){
    int i =l-1,pivot = nums[h];
    for(int j = l;j<h;j++){
        if(nums[j]<pivot){
            i++;
            swap(nums[i],nums[j]);
        }    
    }
    swap(nums[i+1],nums[h]);
    return i+1;
}
int KthSmallest(vector<int>&nums,int l,int h,int k){
    while(l<=h){
        int p = lomutoPartition(nums,l,h);
        if(p==k-1)return nums[p];
        else if(p>k-1)h = p-1;
        else l= p+1;
    }
    return -1;
}
int main(){
    vector<int>nums{10,4,5,8,11,6,26};
    int k;
    cin>>k;
    cout<<KthSmallest(nums,0,nums.size()-1,k);
    return 0;
}