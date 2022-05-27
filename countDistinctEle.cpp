#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int>v{10,10,10,20,30,30,60,50,90,60};
    unordered_set<int>s(v.begin(),v.end());
    cout<<s.size();
    return 0;
}