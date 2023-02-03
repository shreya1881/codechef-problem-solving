#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,xa,xb;
	    cin>>a>>b>>xa>>xb;
	    int x = xa/a;
	    int y = xb/b;
	    cout<<x+y<<endl;
	}
	return 0;
}