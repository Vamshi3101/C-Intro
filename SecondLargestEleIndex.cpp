#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,5,8,20};
    int l = 0,s = -1;
    for(int i =1;i<v.size();i++){
        if(v[i]>v[l]){
            s = l;
            l = i;
        }
        else if(v[i]!=v[l] ){
            if(s==-1)s =i;
            else if(v[i]>v[s])s=i;
        }
    }
    cout<<s;
    return 0;
}