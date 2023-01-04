#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x,y;
	    cin>>x>>y;
	    float a=x/2;
	    if(y>=a) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}