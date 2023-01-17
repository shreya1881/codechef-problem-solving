#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    float s1 = float(a)/float(x);
	    float s2 = float(b)/float(y);
	    if(s1>s2) cout<<"Alice\n";
	    else if(s2>s1) cout<<"Bob\n";
	    else cout<<"EQUAL\n";
	}
	return 0;
}