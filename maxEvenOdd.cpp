#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{10,12,8,4};
    int l = 1,res =1;
    for(int i =1;i<nums.size();i++){
        if((nums[i]%2==0 && nums[i-1]%2!=0) ||(nums[i]%2!=0 && nums[i-1]%2==0))l++;
        else{
            res = max(res,l);
            l =1;
        }
    }
    cout<<max(res,l);
    return 0;
}