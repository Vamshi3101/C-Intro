#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&nums,int k){
    int l =0,h = nums.size()-1;
    while(l<=h){
        if(nums[(h+l)/2]==k)return (h+l)/2;
        else if (nums[(h+l)/2]>k) h = (h+l)/2-1;
        else l = (h+l)/2+1;
    }
    return -1;
}
int main(){
    vector<int>nums{10,20,30,40,50,60};
    int k;
    cin>>k;
    cout<<binarySearch(nums,k);
    return 0;
}