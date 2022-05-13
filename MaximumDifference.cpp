#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{2,3,10,6,4,8,1};
    int res = v[1]-v[0],minVal = v[0];
    for(int k =1;k<v.size();k++){
        res = max(res,v[k]-minVal);
        minVal= min(minVal,v[k]);
    }
    cout<<res;
    return 0;
}