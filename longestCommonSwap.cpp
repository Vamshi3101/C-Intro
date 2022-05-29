#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>nums1{1,1,0,0,0,0},nums2{1,0,1,0,0,0};
    unordered_map<int,int>m;
    for(int i =0;i<nums1.size();i++){
        nums1[i] = nums1[i]-nums2[i];
    }
    int res=0,presum =0;
    for(int i =0;i<nums1.size();i++){
        presum+=nums1[i];
        if(presum==0)res=i+1;
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