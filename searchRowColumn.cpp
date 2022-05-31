#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
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
    int i = 0,j=n-1;
    while(i<n&& j>=0){
        if(v[i][j]==l){
            cout<<i<<" "<<j;
            return 0;
        }
        else if(v[i][j]>l)j--;
        else i++;
    }
    cout<<-1;
    return 0;
}