#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,x;
	    string a="";
	    cin>>n>>x;
	    if(x>(n+1)/2)cout<<-1<<"\n";
	    else{
	        for(int i =0;i<n;i++)a+='a';
	        for(int i =0;i<x;i++){
	            a[i]='a'+i;
	            a[n-i-1]='a'+i;
	        }
	        cout<<a<<"\n";
	    }
	    t--;
	}
	return 0;
}
