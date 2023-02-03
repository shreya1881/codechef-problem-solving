#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x = a+b;
	    if(x>c) cout<<"TRAIN\n";
	    else if(x<c) cout<<"PLANEBUS\n";
	    else cout<<"EQUAL\n";
	}
	return 0;
}