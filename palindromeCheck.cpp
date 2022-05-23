#include<iostream>
using namespace std;
bool palindromeCheck(string &s,int l,int h){
    if(l>=h)return true;
    return (s[l]==s[h])&& palindromeCheck(s,l+1,h-1);

}
int main(){
    string s;
    cin>>s;
    cout<<boolalpha<<palindromeCheck(s,0,s.length()-1);
    return 0;
}