#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{0,0,0};
    int l=0,m=0;
    for(int i =0;i<nums.size();i++){
        if(nums[i]==1){
            l++;
        }
        else{
            m = max(m,l);
            l=0;
        }
    }
    m = max(m,l);
    cout<<m;
    return 0;
}