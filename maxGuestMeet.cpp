#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxGuestsMeet(vector<int>&arr,vector<int>&dep){
    int i =1,j=0,curr=1,res=1;
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    while(i<arr.size() && j<dep.size()){
        if(arr[i]<=dep[j]){
            i++;
            curr++;
        }
        else{
            j++;curr--;
        }
        res = max(res,curr);
    }
    return res;
}
int main(){
    vector<int>arr{900,600,700},dep{1000,800,730};
    cout<<maxGuestsMeet(arr,dep);
    return 0;
}