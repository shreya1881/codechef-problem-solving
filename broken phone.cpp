#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y)
	    cout<<"REPAIR\n";
	    else if(y<x)
	    cout<<"NEW PHONE\n";
	    else cout<<"ANY\n";
	}
	return 0;
}