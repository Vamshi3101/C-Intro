#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    int row,col;
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
    if(row==1){
        for(int i =0;i<col;i++)cout<<v[0][i]<<" ";
    }
    else if(col==1){
        for(int i =0;i<row;i++)cout<<v[i][0]<<" ";
    }
    else{
        for(int i =0;i<col;i++)cout<<v[0][i]<<" ";
        for(int i =1;i<row;i++)cout<<v[i][col-1]<<" ";
        for(int i = col-2;i>=0;i--)cout<<v[row-1][i]<<" ";
        for(int i = row-2;i>0;i--)cout<<v[i][0]<<" ";
    }
    return 0;
}