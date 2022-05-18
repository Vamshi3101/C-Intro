#include<iostream>
#include<vector>
using namespace std;
bool checkPair(vector<int>&nums,int k){
    int l =0,h = nums.size()-1;
    while(l< h){
        if(nums[l]+nums[h]==k)return true;
        if(nums[l]+nums[h]>k) h--;
        if(nums[l]+nums[h]<k)l++;
    }
    return false;
}
int main(){
    vector<int>nums{2,5,8,12,30};
    int k;
    cin>>k;
    cout<<boolalpha<<checkPair(nums,k);
    return 0;
}