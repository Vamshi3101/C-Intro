#include<iostream>
#include<vector>
using namespace std;
void rotateD(vector<int>&v,int &d){
    vector<int>t{};
    for(int i =0;i<d;i++){
        t.push_back(v[i]);
    }
    for(int i =0;i<v.size()-d;i++){
        v[i] = v[i+d];
    }
    for(int i = v.size()-d;i<v.size();i++){
        v[i] = t[i+d-v.size()];
    }
}
void rotateDMethod2(vector<int>&v,int &d){
    for(int i =0;i<d/2;i++){
        int temp = v[i];
        v[i] = v[d/2-i+1];
        v[d/2-i+1] = temp;
    }
    for(int i =0;i<(v.size()-d+1)/2;i++){
        int temp = v[d+i];
        v[d+i] = v[v.size()-i-1];
        v[v.size()-i-1] = temp;
    }
    for(int i =0;i<v.size()/2;i++){
        int temp = v[i];
        v[i] = v[v.size()-i-1];
        v[v.size()-i-1] = temp;
    }
}
int main(){
    vector<int>v {1,2,3,4,5,6};
    int d;
    cin>>d;
    // rotateD(v,d);
    rotateDMethod2(v,d);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}