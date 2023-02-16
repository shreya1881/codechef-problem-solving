#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x = 10*a;
	    if(x>=b){
	        cout<<b*c<<endl;
	    }
	    else{
	        cout<<x*c<<endl;
	    }
	}
	return 0;
}
