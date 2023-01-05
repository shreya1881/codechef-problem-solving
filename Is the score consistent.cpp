#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    int c,d;
	    cin>>a>>b;
	    cin>>c>>d;
	    if(a>c || b>d) cout<<"IMPOSSIBLE\n";
	    else cout<<"POSSIBLE\n";
	}
	return 0;
}