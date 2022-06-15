#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,k,res=0;
	    cin>>n>>k;
	    cout<<(n-1)/5-(k-1)/5<<"\n";
	    t--;
	}
	return 0;
}
