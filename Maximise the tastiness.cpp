#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x=max(a,b);
	    int y=max(c,d);
	    cout<<x+y<<endl;
	}
	return 0;
}