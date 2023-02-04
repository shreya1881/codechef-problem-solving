#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b,c;
	    cin>>x>>y>>a>>b>>c;
	    int z = x-y;
	    int s = a+b+c;
	    if(z>=s) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
