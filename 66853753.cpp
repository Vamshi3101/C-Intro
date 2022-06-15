#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    string s,a="";
	    cin>>s;
	    for(int i =0;i<s.length();i+=2){
	        if(s[i]=='0'){
	            if(s[i+1]=='0')a+='A';
	            else a+='T';
	        }
	        else{
	            if(s[i+1]=='0')a+='C';
	            else a+='G';
	        }
	    }
	    cout<<a<<"\n";
	    t--;
	}
	return 0;
}
