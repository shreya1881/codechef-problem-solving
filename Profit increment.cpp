#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a = 0.1*x + x;
	    int cp = x-y;
	    cout<<a-cp<<endl;
	}
	return 0;
}