#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{5,8,6,13,3,-1};
    int sum=22,presum=0;
    unordered_set<int>s;
    for(int i =0;i<nums.size();i++){
        presum+=nums[i];
        if(presum==sum){
            cout<<"Yes";
            return 0;
        }
        if(s.find(presum-sum)!=s.end()){
            cout<<"Yes";
            return 0;
        }
        s.insert(presum);
    }
    cout<<"No";
    return 0;
}