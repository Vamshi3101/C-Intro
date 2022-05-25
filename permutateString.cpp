#include<iostream>
using namespace std;
void permutate(string &s,int i =0){
    if(i==s.length()-1){
        cout<<s<<" ";
        return;
    }
    for(int j =i;j<s.length();j++){
        swap(s[i],s[j]);
        permutate(s,i+1);
        swap(s[j],s[i]);
    }
}
int main(){
    string s;
    cin>>s;
    permutate(s);
    return 0;
}