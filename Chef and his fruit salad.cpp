#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	   if(y>=(x/2)){
	        cout<<x/2<<endl;
	    }
	    else{
	        cout<<y<<endl;
	    }
	    
	}
	return 0;
}