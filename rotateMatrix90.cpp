#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i =0;i<n;i++){
        vector<int>temp;
        for(int j =0;j<n;j++){
            int k;
            cin>>k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i =0;i<n;i++){
        int low=0,high = n-1;
        while(low<high){
            swap(v[low][i],v[high][i]);
            low++;high--;
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}