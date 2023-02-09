#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    if((a+b)>=x || (a+c)>=x|| (b+c)>=x) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
