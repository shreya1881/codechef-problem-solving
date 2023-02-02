#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int m = min(a,b);
	    int p =min(m,c);
	    if(p==a) cout<<"ALICE\n";
	    else if(p==b) cout<<"BOB\n";
	    else cout<<"CHARLIE\n";
	}
	return 0;
	
}