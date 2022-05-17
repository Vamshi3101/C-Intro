#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"No";
        return 0;
    }
    int count[26]{0};
    for(int i =0;i<s1.length();i++){
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    for(int i =0;i<26;i++){
        if(count[i]!=0){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}