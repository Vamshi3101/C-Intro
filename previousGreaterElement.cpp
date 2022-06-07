#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void previousGreater(vector<int>&nums){
    int prev = -1;
    stack<int>s;
    s.push(0);
    cout<<prev<<" ";
    for(int i =1;i<nums.size();i++){
        while(s.empty()==false && nums[s.top()]<=nums[i]){
            s.pop();
        }
        prev = s.empty()?-1:nums[s.top()];
        cout<<prev<<" ";
        s.push(i);
    }
}
void nextGreater(vector<int>&nums){
    int next = -1;
    stack<int>s;
    s.push(nums[nums.size()-1]);
    cout<<next<<" ";
    for(int i = nums.size()-2;i>=0;i--){
        while(s.empty()==false && s.top()<=nums[i]){
            s.pop();
        }
        next = s.empty()?-1:s.top();
        cout<<next<<" ";
        s.push(nums[i]);
    }
}
int main(){
    vector<int>nums{5,15,10,8,6,12,9,18};
    // previousGreater(nums);
    nextGreater(nums);
    return 0;
}