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
    int t=0,l=0,r=n-1,b=n-1;
    while (t<=b && l<=r)
    {
        for(int i = l;i<=r;i++){
            cout<<v[t][i]<<" ";
        }
        t++;
        for(int i = t;i<=b;i++){
            cout<<v[i][r]<<" ";
        }
        r--;
        for(int i = r;i>=l;i--){
            cout<<v[b][i]<<" ";
        }
        b--;
        for(int i = b;i>=t;i--){
            cout<<v[i][l]<<" ";
        }
        l++;
    }
    
    return 0;
}