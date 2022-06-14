#include <iostream>
#include<cmath>
using namespace std;
int factors(int n){
    int res = 0;
    for(int i =1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i)res+=1;
            else res+=2;
        }
    }
    return res;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int a,b;
	    cin>>a>>b;
        cout<<factors(abs(a-b))<<"\n";
	    t--;
	}
	return 0;
}
