#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    vector<vector<int>>v;
    cin>>row>>col;
    for(int i =0;i<row;i++){
        vector<int>temp;
        for(int j =0;j<col;j++){
            int k;
            cin>>k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }
    for(int i =0;i<row;i++){
        for(int j = i+1;j<col;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++)cout<<v[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}