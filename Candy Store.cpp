#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y<=x) cout<<y<<endl;
	    else{
	        int a = y-x;
	        cout<<x+(a*2)<<endl;
	    }
	}
	return 0;
}
