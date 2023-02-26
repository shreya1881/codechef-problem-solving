#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    int y = 100-x;
	    cout<<(a+(y*b))*10<<endl;
	}
	return 0;
}
