#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int w = x*7;
	    int s = y*d + z*(7-d);
	    if(w>s) cout<<w<<endl;
	    else cout<<s<<endl;
	}
	return 0;
}