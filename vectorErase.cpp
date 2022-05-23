#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,3,0,5,6};
    cout<<v.size()<<"\n";
    v.erase(v.begin()+1);
    cout<<v.size();
    return 0;
}