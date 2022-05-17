#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i =0,j=0;
    for(int i = 0;i<s1.length();i++){
        if(s1[i]==s2[j])j++;
    }
    if(j==s2.length())cout<<"True";
    else cout<<"False";
    return 0;
}