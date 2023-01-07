#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x = a/0.1;
	    int y = b/0.2;
	    if(x>y) cout<<"FIRST\n";
	    else if(y>x) cout<<"SECOND\n";
	    else cout<<"ANY\n";
	}
	return 0;
}