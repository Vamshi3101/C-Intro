#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums(5,10);
    nums.insert(nums.begin()+2,3);
    for(auto i = nums.begin();i<nums.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}