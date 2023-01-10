#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=a+b;
	    if(x==c) cout<<"YES\n";
	    else cout<<"No\n";
	}
	return 0;
}