#include<iostream>
#include<vector>
using namespace std;
void dutchFlagAlgo(vector<int>&nums){
    int l=0,m=0,h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
}
int main(){
    vector<int>nums{0,1,2,1,1,2};
    dutchFlagAlgo(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}