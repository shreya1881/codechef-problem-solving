#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a*b)<0 || (b*c)<0 || (a*c)<0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}