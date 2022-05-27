#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>nums1{10,15,20,15,30,30,5},nums2{30,5,30,80};
    int count =0;   
    unordered_set<int>s1{nums1.begin(),nums1.end()};
    for(auto x:nums2){
        if(s1.find(x)!=s1.end()){
            count++;
            s1.erase(x);
        }
    }
    cout<<count;
    return 0;
}