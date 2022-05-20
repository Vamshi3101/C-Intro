#include<iostream>
#include<vector>
using namespace std;
int mergeInversion(vector<int>&nums,int l,int m,int h){
    vector<int>left,right;
    for(int i=l;i<=m;i++){
        left.push_back(nums[i]);
    }
    for(int i=m+1;i<=h;i++){
        right.push_back(nums[i]);
    }
    int i =0,j=0,res =0,k=l;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            nums[k]=left[i];
            i++;
            k++;
        }
        else{
            nums[k]= right[j];
            j++;
            k++;
            res+=(left.size()-i);
        }
    }
    while(i<left.size()){
        nums[k]=left[i];
        k++;
        i++;
    }
    while(j<right.size()){
        nums[k]=right[j];
        k++;
        j++;
    }
    return res;
}
int inversions(vector<int>&nums,int l,int h){
    int res = 0;
    if(l<h){
        int m = (l+h)/2;
        res+=inversions(nums,l,m);
        res+=inversions(nums,m+1,h);
        res+=mergeInversion(nums,l,m,h);
    }
    return res;
}
int main(){
    vector<int>nums{2,4,1,3,5};
    cout<<inversions(nums,0,nums.size()-1);
    return 0;
}