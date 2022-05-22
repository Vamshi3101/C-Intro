#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>&p1,pair<int,int>&p2){
    return p1.first<p2.first;
}
void overlap(vector<pair<int,int>>&nums,vector<pair<int,int>>&merged){
    sort(nums.begin(),nums.end(),comp);
    merged.push_back({nums[0].first,nums[0].second});
    int res =0;
    for(int i =1;i<nums.size();i++){
        if(nums[i].first<=merged[res].second){
            merged[res].first = min(merged[res].first,nums[i].first);
            merged[res].second=max(merged[res].second,nums[i].second);
        }
        else{
            merged.push_back({nums[i].first,nums[i].second});
            res++;
        }
    }
}
int main(){
    vector<pair<int,int>>nums{{5,10},{3,15},{18,30},{2,7}},merged;
    overlap(nums,merged);
    for(int i =0;i<merged.size();i++){
        cout<<merged[i].first<<" "<<merged[i].second<<"\n";
    }
    return 0;
}