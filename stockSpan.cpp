#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void span(vector<int>&nums){
    int stockSpan =1;
    stack<int>s;
    s.push(0);
    cout<<stockSpan<<" ";
    for(int i =1;i<nums.size();i++){
        while(s.empty()==false && nums[s.top()]<=nums[i]){
            s.pop();
        }
        stockSpan = s.empty()?i+1:i-s.top();
        cout<<stockSpan<<" ";
        s.push(i);
    }
}
int main(){
    vector<int>nums{60,10,20,15,35,50};
    span(nums);
    return 0;
}