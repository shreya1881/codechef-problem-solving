#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=y) cout<<z<<endl;
	    else{
	        if(x%y==0)
	        {
	            int a=x/y;
	            cout<<a*z<<endl;
	        }
	        else{
	            int a=(x/y)+1;
	            cout<<a*z<<endl;
	        }
	    }
	}
	return 0;
}