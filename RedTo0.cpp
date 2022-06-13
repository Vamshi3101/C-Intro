#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long long a,b;
	    cin>>a>>b;
	    if(a==b)cout<<a<<"\n";
	    else{
	        if(min(a,b)==0)cout<<-1<<"\n";
	        else{
	            if(a<b){
	                long long res = 0;
	                while(a<b-a){
	                    a*=2;
	                    res++;
	                }
	                res+=(2*a-b);
	                res++;
	                res+=(2*b-2*a);
	                cout<<res<<"\n";
	            }
	            else{
                    long long res = 0;
	                while(b<a-b){
	                    b*=2;
	                    res++;
	                }
	                res+=(2*b-a);
	                res++;
	                res+=(2*a-2*b);
	                cout<<res<<"\n";
	            }
	        }
	    }
	    t--;
	}
	return 0;
}
