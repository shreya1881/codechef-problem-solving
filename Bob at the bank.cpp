#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    int a=x*z;
	    int b=y*z;
	    cout<<w+a-b<<endl;
	}
	return 0;
}