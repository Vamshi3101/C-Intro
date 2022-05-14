#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{5,-10,6,90,3};
    int k,res=0;
    cin>>k;
    for(int i =0;i<k;i++){
        res +=nums[i];
    }
    for(int i = 1;i<nums.size()-k+1;i++){
        res = max(res,res-nums[i-1]+nums[i+k-1]);
    }
    cout<<res;
    return 0;
}