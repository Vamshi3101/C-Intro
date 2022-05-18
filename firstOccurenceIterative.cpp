#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>&nums,int l,int h,int k){
    while(l<=h){
        if(nums[(l+h)/2]>k) h = (l+h)/2-1;
        else if(nums[(l+h)/2]<k) l = (l+h)/2+1;
        else{
            if(nums[(l+h)/2-1]!=nums[(l+h)/2] || (l+h)/2==0)return (l+h)/2;
            else h = (l+h)/2-1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums{5,10,10,15,20,20,20};
    int k;
    cin>>k;
    cout<<firstOccurence(nums,0,nums.size(),k);
    return 0;
}