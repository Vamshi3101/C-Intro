#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minChocolate(vector<int>&nums,int m){
    if(m>nums.size())return -1;
    sort(nums.begin(),nums.end());
    int res =nums[m-1]-nums[0];
    for(int i=1;i<nums.size()+1-m;i++){
        res = min(res,nums[i+m-1]-nums[i]);
    }
    return res;
}
int main(){
    vector<int>nums{7,3,2,4,9,12,56};
    int m;
    cin>>m;
    cout<<minChocolate(nums,m);
    return 0;
}