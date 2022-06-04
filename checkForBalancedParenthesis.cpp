#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<int>a;
    for(int i =0;i<s.length();i++){
        if(s[i]=='{' || s[i] == '(' || s[i]=='[')a.push(s[i]);
        else{
            if(a.empty()==true){
                return false;
            }
            else if(s[i]=='}' && a.top()!='{'){
                cout<<"NO";
                return 0;
            }
            else if(s[i]==')' && a.top()!='('){
                cout<<"NO";
                return 0;
            }
            else if(s[i]==']' && a.top()!='['){
                cout<<"No";
                return 0;
            }
            else{
                a.pop();
            }
        }
    }
    if(a.empty()==true){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}