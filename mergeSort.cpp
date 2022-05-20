#include<iostream>
#include<vector>
using namespace std;
void mergeFun(vector<int>&nums,int l,int m,int h){
    vector<int>left{},right{};
    for(int i =0;i<=m;i++){
        left.push_back(nums[i]);
    }
    for(int i =m+1;i<=h;i++){
        right.push_back(nums[i]);
    }
    int i=0,j=0,k=0;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            nums[k] = left[i];
            i++;
            k++;
        }
        else{
            nums[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<left.size()){
        nums[k] = left[i];
        k++;
        i++;
    }
    while(j<right.size()){
        nums[k] = right[j];
        k++;
        j++;
    }
}
void MergeSort(vector<int>&nums,int l,int h){
    if(l<h){
        int m = (l+h)/2;
        MergeSort(nums,l,m);
        MergeSort(nums,m+1,h);
        mergeFun(nums,l,m,h);
    }
}
int main(){
    vector<int>nums{10,5,30,15,7};
    MergeSort(nums,0,nums.size()-1);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}