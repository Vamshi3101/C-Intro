#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    for(int i =0;i<4;i++){
        vector<int>temp;
        for(int j =0;j<4;j++){
            temp.push_back(4*i+j+1);
        }
        v.push_back(temp);
    }
    for(int i =0;i<4;i++){
        if(i%2==0){
            for(int j =0;j<4;j++)cout<<v[i][j]<<" ";
        }
        else{
            for(int j =3;j>=0;j--)cout<<v[i][j]<<" ";
        }
    }
    return 0;
}