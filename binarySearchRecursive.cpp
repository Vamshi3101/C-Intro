#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&nums,int l,int h,int k){
    if(l>h)return -1;
    if(nums[(l+h)/2]==k) return (l+h)/2;
    else if(nums[(l+h)/2]>k){
        return binarySearch(nums,l,(l+h)/2-1,k);
    }
    else {
        return binarySearch(nums,(l+h)/2+1,h,k);
    }
}
int main(){
    vector<int>nums{10,20,30,40,50,60,70};
    int k;
    cin>>k;
    cout<<binarySearch(nums,0,nums.size(),k);
    return 0;
}