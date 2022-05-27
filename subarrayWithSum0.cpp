#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{3,4,-3,1};
    int sum = 0;
    unordered_set<int>s;
    for(int i =0;i<nums.size();i++){
        sum+=nums[i];
        if(s.find(sum)!=s.end()){
            cout<<"Yes";
            return 0;
        }
        if(sum==0){
            cout<<"Yes";
            return 0;
        }
        s.insert(sum);
    }
    cout<<"No";
    return 0;
}