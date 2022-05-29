#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{1,0,1,1,1,0,0};
    unordered_map<int,int>m;
    int res=0,presum=0;
    for(int i =0;i<nums.size();i++){
        if(nums[i]==1)presum++;
        else presum--;
        if(presum==0)res = i+1;
        if(m.find(presum)==m.end()){
            m.insert({presum,i});
        }
        if(m.find(presum)!=m.end()){
            res = max(res,i-m[presum]);
        }
    }
    cout<<res;
    return 0;
}