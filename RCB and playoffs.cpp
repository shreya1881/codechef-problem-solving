#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a = z*2;
	    if(a>= (y-x))
	    cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;
}