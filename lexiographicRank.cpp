#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    if(n==0||n==1)return 1;
    return n*factorial(n-1);
}
int lexiographicRank(string &s){
    vector<int>v(256,0);
    for(int i =0;i<s.length();i++){
        v[s[i]]++;
    }
    for(int i =1;i<256;i++){
        v[i]+=v[i-1];
    }
    int fact = factorial(s.length());
    int res=1;
    for(int i =0;i<s.length()-1;i++){
        fact/=(s.length()-i);
        res+=v[s[i]-1]*fact;
        for(int j =s[i];j<256;j++){
            v[j]--;
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    cout<<lexiographicRank(s);
    return 0;
}