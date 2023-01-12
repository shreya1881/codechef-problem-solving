#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a = 5*x;
	    int b = 10*y;
	    int c = a+b;
	    cout<<c/z<<endl;
	}
	return 0;
	
}