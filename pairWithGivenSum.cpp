#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{3,2,8,15,-8};
    int sum;
    cin>>sum;
    unordered_set<int>s;
    for(int i =0;i<nums.size();i++){
        if(s.find(sum-nums[i])!=s.end()){
            cout<<"Yes";
            return 0;
        }
        s.insert(nums[i]);
    }
    cout<<"No";
    return 0;
}