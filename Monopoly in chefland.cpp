#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x>(y+z))||(y>(x+z))||(z>(x+y)))
	    cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
