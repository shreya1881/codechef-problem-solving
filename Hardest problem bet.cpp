#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x = min(a,b);
	    int y = min(x,c);
	    if(y==a) cout<<"Draw\n";
	    else if(y==b) cout<<"Bob\n";
	    else cout<<"Alice\n";
	}
	return 0;
}