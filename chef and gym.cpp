#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=x+y;
	    if(x>z) cout<<"0\n";
	    else{
	        if(a<=z) cout<<"2\n";
	        else cout<<"1\n";
	    }
	}
	return 0;
}