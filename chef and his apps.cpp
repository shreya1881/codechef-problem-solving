#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int a = x+y;
	    int b= s-a;
	    if(b>=z) cout<<"0\n";
	    else if(s-x>=z || s-y>=z) cout<<"1\n";
	    else cout<<"2\n";
	}
	return 0;
}