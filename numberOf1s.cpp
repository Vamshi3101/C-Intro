#include<iostream>
#include<vector>
using namespace std;
int count1s(vector<int>&nums,int l,int h){
    while(l<=h){
        if(nums[(l+h)/2]==0)l= (l+h)/2+1;
        else{
            if((l+h)/2==0 || nums[(l+h)/2-1]==0){
                return nums.size()-(l+h)/2;
            }
            else{
                h = (l+h)/2-1;
            }
        }
    }
    return 0;
}
int main(){
    vector<int>nums{1,1,1,1,1};
    cout<<count1s(nums,0,nums.size());
    return 0;
}