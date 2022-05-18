#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>&nums,int l,int h,int k){
    if(l>h)return -1;
    if(nums[(l+h)/2]>k) return firstOccurence(nums,l,(l+h)/2-1,k);
    else if(nums[(l+h)/2]<k) return firstOccurence(nums,(l+h)/2+1,h,k);
    else{
        if(nums[(l+h)/2-1]!=nums[(l+h)/2] || (l+h)/2==0)return (l+h)/2;
        else return firstOccurence(nums,l,(l+h)/2-1,k);
    }
}
int main(){
    vector<int>nums{5,10,10,15,20,20,20};
    int k;
    cin>>k;
    cout<<firstOccurence(nums,0,nums.size(),k);
    return 0;
}