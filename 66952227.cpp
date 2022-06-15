#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long long n;
	    cin>>n;
	    if(n<2)cout<<-1<<"\n";
	    else{
	        int pf=0;
	        for(int i =1;i<=sqrt(n);i++){
	            if(n%i==0){
	                if(n/i==i)pf++;
	                else pf+=2;
	            }
	        }
	        if(n%2==0)cout<<2*(pf-1)-1<<"\n";
	        else cout<<2*(pf-1)<<"\n";
	    }
	    t--;
	}
	return 0;
}
