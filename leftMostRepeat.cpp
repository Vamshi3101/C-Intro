#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int res =-1;
    vector<bool>visited(256,false);
    for(int i =s1.size()-1;i>=0;i--){
        if(!visited[s1[i]]){
            visited[s1[i]]=true;
        }
        else{
            res = i;
        }
    }
    cout<<res;
    return 0;
}