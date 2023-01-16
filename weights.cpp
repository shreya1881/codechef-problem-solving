#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if((x+y)==w || (x+z)==w || (y+z)==w || (x+y+z)==w) cout<<"YES\n";
	    else if(x==w || y==w || z==w) cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;
}