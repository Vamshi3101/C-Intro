#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{8,3,1,5,-6,6,2,2};
    unordered_map<int,int>m;
    int res= 0,presum=0,sum=4;
    for(int i =0;i<nums.size();i++){
        presum+=nums[i];
        if(presum==sum)res=i+1;
        if(m.find(presum)==m.end()){
            m.insert({presum,i});
        }
        if(m.find(presum-sum)!=m.end()){
            res = max(res,i-m[presum-sum]);
        }
    }
    cout<<res;
    return 0;
}